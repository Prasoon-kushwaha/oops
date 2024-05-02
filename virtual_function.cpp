#include <iostream>
using namespace std;

class Base {
public:
 
    virtual void display() {
        cout << "This is Base class\n";
    }
};


class Derived : public Base {
public:

    void display() override {
        cout << "This is Derived class\n";
    }
};

int main() {
    Base *basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    basePtr->display();

    return 0;
}
