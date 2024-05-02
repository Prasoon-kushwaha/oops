#include <iostream>
using namespace std;

class MyClass {
public:
    int data;

    MyClass(int d) : data(d) {} 

    void printData() {
        cout << "Data from member function: " << data << endl;

    }

    friend void printDataFriend(const MyClass& obj);
};

void printDataFriend(const MyClass& obj) {
    cout << "Data from friend function: " << obj.data << endl;
}

int main() {
    MyClass obj(5);

    obj.printData();

    printDataFriend(obj);

    return 0;
}
