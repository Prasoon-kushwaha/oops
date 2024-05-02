#include<iostream>
using namespace std;

class code {
    int a;
public:
    void display() {
        cout << a << endl;
    }

    // Default constructor
    code() {
        a = 0;
    }
    // Parameterized constructor
    code(int b) {
        a = b;
    }
    // Copy constructor
    code(const code &x) {
        a = x.a;
    }

};

int main() {
code t1;
t1.display();
    code a(100);
    a.display();
    code b(a);
    code c = a; // Call the copy constructor
    b.display(); // Corrected: Need to call the member function display() using ()
    c.display();
    return 0;
}
