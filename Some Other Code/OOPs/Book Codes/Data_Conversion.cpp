#include <iostream>
using namespace std;

class invent2; // Forward declaration

class invent1 {
    int code;   // item code
    int items;  // number of items
    float price;    // cost of each item

public:
    invent1(int a, int b, float c) {
        code = a;
        items = b;
        price = c;
    }

    void putdata() {
        cout << "Code: " << code << "\n";
        cout << "Items: " << items << "\n";
        cout << "Value: " << price << "\n";
    }

    int getcode() { return code; }
    int getitems() { return items; }
    float getprice() { return price; }

    operator float() {
        return (items * price);
    }

    operator invent2(); // Declaration of conversion operator to invent2
};

class invent2 {
    int code;
    float value;

public:
    invent2() {
        code = 0;
        value = 0;
    }

    invent2(int x, float y) {
        code = x;
        value = y;
    }

    void putdata() {
        cout << "Code: " << code << "\n";
        cout << "Value: " << value << "\n\n";
    }

    invent2(invent1 p) {
        code = p.getcode();
        value = p.getitems() * p.getprice();
    }
};

// Definition of conversion operator to invent2
invent1::operator invent2() {
    return invent2(code, items * price);
}

int main() {
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;

    // invent1 To float
    total_value = s1;

    // invent1 To invent2
    d1 = s1;

    cout << "Product details - invent1 type" << "\n"; 
    s1.putdata();
    cout << "\nStock value" << "\n";
    cout << "Value = " << total_value << "\n\n";
    cout << "Product details-invent2 type" << "\n";
    d1.putdata();

    return 0;
}
