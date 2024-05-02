#include<iostream>
using namespace std;

class B {
    int x;
public:
    void get(int a) {
        x = a;
    }
    void put() {
        cout << x;
    }

    friend B operator *(B, B);
};

B operator *(B b1, B b2) {
    B b3;
    b3.x = b1.x * b2.x; 
    return b3;
}

int main() {
    B obj1, obj2, obj3;
    obj1.get(10);
    obj2.get(8);
    cout << "The value after Sum: ";
    obj3 = obj1 * obj2;
    obj3.put();
    cout << endl;

    return 0;
}
