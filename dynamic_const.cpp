#include <iostream>
#include <string>

using namespace std;

class DynamicConstructorExample {
private:
    int* dynamicInt;

public:
    // Constructor
    DynamicConstructorExample() {
        // Dynamically allocate memory for an integer
        dynamicInt = new int;
        cout << "Dynamic memory allocated." << endl;
    }

    // Destructor
    ~DynamicConstructorExample() {
        // Deallocate memory when object is destroyed
        delete dynamicInt;
        cout << "Dynamic memory deallocated." << endl;
    }

    // Function to set the value of the dynamically allocated integer
    void setValue(int value) {
        *dynamicInt = value;
    }

    // Function to get the value of the dynamically allocated integer
    int getValue() const {
        return *dynamicInt;
    }
};

int main() {
    // Create an object of DynamicConstructorExample
    DynamicConstructorExample obj;

    // Set the value of the dynamically allocated integer
    obj.setValue(42);

    // Get and print the value of the dynamically allocated integer
    cout << "Value of dynamically allocated integer: " << obj.getValue() << endl;

    return 0;
}
