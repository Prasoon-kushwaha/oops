#include <iostream>

// Base class
class Base {
public:
    // Virtual destructor
    virtual ~Base() {
        std::cout << "Base destructor" << std::endl;
    }
    
    // Virtual function
    virtual void display() {
        std::cout << "Display from Base class" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Destructor
    ~Derived() override {
        std::cout << "Derived destructor" << std::endl;
    }
    
    // Override virtual function
    void display() override {
        std::cout << "Display from Derived class" << std::endl;
    }
};

int main() {
    // Base class pointer pointing to Derived class object
    Base* basePtr = new Derived();

    // Accessing virtual function through base class pointer
    basePtr->display();

    // Deleting object through base class pointer
    delete basePtr;

    return 0;
}
