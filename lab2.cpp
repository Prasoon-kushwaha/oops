#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class MyClass {
public:
    int data;
MyClass(int d) : data(d) {}
 void printData() {
        cout << "Data from member function: " << data << endl;
    }

    friend void printDataFriend(MyClass obj);
};

void printDataFriend(MyClass obj) {
    cout << "Data from friend function: " << obj.data << endl;
}

int main() {
    MyClass obj(10);

    obj.printData();

    printDataFriend(obj);

    return 0;
}
