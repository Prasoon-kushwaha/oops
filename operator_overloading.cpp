#include<iostream>
using namespace std;

class A {
    int x, y;
public:
    void getdata(int a, int b);
    void operator --();
    void display();
};

void A::getdata(int a, int b) {
    x = a;
    y = b;
}

void A::display() {
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

void A::operator --() {
    x = x-1;
    y = y-1; 
}

int main() {
    A t1;
    t1.getdata(4, 6);
    --t1;
    t1.display();

    return 0;
}
