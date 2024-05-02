#include <iostream>
using namespace std;

class MyLogicalClass {
private:
    bool value;

public:
    MyLogicalClass(bool val) : value(val) {}

    // Overloading the logical AND operator
    MyLogicalClass operator&&( MyLogicalClass& other)  {
        return MyLogicalClass(value && other.value);
    }

    // Overloading the logical OR operator
    MyLogicalClass operator||( MyLogicalClass& other)  {
        return MyLogicalClass(value || other.value);
    }

    // Overloading the logical NOT operator
    MyLogicalClass operator!()  {
        return MyLogicalClass(!value);
    }

    // Overloading the assignment operator
    MyLogicalClass& operator=( MyLogicalClass& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    void print()  {
        cout << boolalpha << value << endl;
    }
};

int main() {
    MyLogicalClass a(true);
    MyLogicalClass b(false);

    
    MyLogicalClass result_and = a && b;
    MyLogicalClass result_or = a || b;
    MyLogicalClass result_not = !a;

    
    result_and.print();  
    result_or.print();  
    result_not.print();  

    
    MyLogicalClass c = a;
    c.print();  

    return 0;
}
