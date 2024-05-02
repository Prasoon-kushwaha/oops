#include <iostream>

using namespace std;

class A {
  int a;
public:
    A(int _a) : a(_a) {} 
    void show() {
        cout << "This is class A, a = " << a << endl;
    }
};

class B {
    int b;
public:
    B(int _b) : b(_b) {} 
    void show() {
        cout << "This is class B, b = " << b << endl;
    }
};


class C : public A, public B {

    int c;
public:
    C(int _a, int _b, int _c) : A(_a), B(_b), c(_c) {} 

    void show() {
        cout << "This is class C, c = " << c << endl;
    }
};

int main() {
    C obj(1, 2, 3);
    obj.show(); 
    obj.A::show(); 
    obj.B::show(); 

    return 0;
}
