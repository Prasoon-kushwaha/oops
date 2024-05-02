#include <iostream>
using namespace std;

class MyClass {
public:
    int data;
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    MyClass obj;
    obj.data = 42;

    MyClass* ptr = &obj; 

    // Pointer to member data
    int MyClass::*dataMemberPtr = &MyClass::data;

    // Pointer to member function
    void (MyClass::*functionPtr)() = &MyClass::display;

    // Accessing member data using pointer-to-member data
    cout << "Accessing data using pointer-to-member: " << obj.*dataMemberPtr << endl;

    // Accessing member function using pointer-to-member function
    (obj.*functionPtr)();

    // Accessing member data using pointer-to-member data through a pointer
    cout << "Accessing data using pointer-to-member through a pointer: " << ptr->*dataMemberPtr << endl;

    // Accessing member function using pointer-to-member function through a pointer
    (ptr->*functionPtr)();

    return 0;
}
