#include <iostream>
using namespace std;

class MyClass {
public:
int data;
    MyClass(int d) : data(d) {} //constructor

    void setData(int d) {
        data = d;
    }

    int getData() const {
        return data;
    }
};

// Function to create and return an object of MyClass
MyClass createObject(int value) {
    MyClass obj(value);
    return obj;
}

int main() {
    MyClass newObj(10);

    // Access and print the data member of the returned object
    cout << "Data from returned object: " << newObj.getData() << endl;

    return 0;
}
