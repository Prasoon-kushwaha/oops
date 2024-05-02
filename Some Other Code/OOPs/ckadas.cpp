#include <iostream>
using namespace std;

class A {
private:
    int value;
public:
    A(int val) : value(val) {}

    A operator+(const A& other) {
        return A(value + other.value);
    }

    A operator-(const A& other) {
        return A(value - other.value);
    }

    A& operator++() {
        ++value;
        return *this;
    }

    A operator++(int) {
        A temp = *this;
        ++(*this);
        return temp;
    }
  
    A& operator--() {
        --value;
        return *this;
    }

    A operator--(int) {
        A temp = *this;
        --(*this);
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    A a(5);
    A b(3);

    A c = a + b;
    c.display(); // Value: 8
    
    A k = ++c;
    cout << "After pre-increment, k: ";
    k.display(); // Value: 9
    cout << "After pre-increment, c: ";
    c.display(); // Value: 9
    
    k = c++;
    cout << "After post-increment, k: ";
    k.display(); // Value: 9
    cout << "After post-increment, c: ";
    c.display(); // Value: 10
    
    A d = --c;
    cout << "After pre-decrement, d: ";
    d.display(); // Value: 9
    cout << "After pre-decrement, c: ";
    c.display(); // Value: 9
    
    d = c--;
    cout << "After post-decrement, d: ";
    d.display(); // Value: 9
    cout << "After post-decrement, c: ";
    c.display(); // Value: 8

    return 0;
}
