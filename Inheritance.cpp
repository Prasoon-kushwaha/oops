#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateMember;
protected:
    int protectedMember;
public:
    int publicMember;

 
    Base() {
        privateMember = 10;
        protectedMember = 20;
        publicMember = 30;
    }

   
    void displayPrivate() {
        cout << "Private Member of Base: " << privateMember << endl;
    }
};


class Derived : public Base {
public:
    void display() {
        cout << "Protected Member of Base: " << protectedMember << endl;
        cout << "Public Member of Base: " << publicMember << endl;
        displayPrivate();
    }
};

int main() {
    Derived d;
    d.display();
}
