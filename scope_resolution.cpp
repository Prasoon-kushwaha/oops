#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int len, int wid); 
    int area(); 
};

Rectangle::Rectangle(int len, int wid) { // Definition of constructor using scope resolution
    length = len;
    width = wid;
}

int Rectangle::area() { // Definition of member function area using scope resolution
    return length * width;
}

int main() {
    Rectangle rect(5, 4);
    cout << "Area of Rectangle: " << rect.area() << endl; 

    return 0;
}
