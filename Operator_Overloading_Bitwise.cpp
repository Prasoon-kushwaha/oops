#include <iostream>
using namespace std;
class MyBitwiseClass {
private:
    int value;

public:
    MyBitwiseClass(int val) : value(val) {}

    // Overloading the bitwise AND operator
    MyBitwiseClass operator&(const MyBitwiseClass& other)  {
        return MyBitwiseClass(value & other.value);
    }

    // Overloading the bitwise OR operator
    MyBitwiseClass operator|(const MyBitwiseClass& other)  {
        return MyBitwiseClass(value | other.value);
    }

    // Overloading the bitwise XOR operator
    MyBitwiseClass operator^( MyBitwiseClass& other)  {
        return MyBitwiseClass(value ^ other.value);
    }

    // Overloading the bitwise NOT operator
    MyBitwiseClass operator~()  {
        return MyBitwiseClass(~value);
    }

    // Overloading the left shift operator
    MyBitwiseClass operator<<(int shift)  {
        return MyBitwiseClass(value << shift);
    }

    // Overloading the right shift operator
    MyBitwiseClass operator>>(int shift)  {
        return MyBitwiseClass(value >> shift);
    }

    
    void print()  {
        cout << value << endl;
    }
};

int main() {
    MyBitwiseClass a(5);
    MyBitwiseClass b(3);

    
    MyBitwiseClass result_and = a & b;
    MyBitwiseClass result_or = a | b;
    MyBitwiseClass result_xor = a ^ b;
    MyBitwiseClass result_not = ~a;
    MyBitwiseClass result_shift_left = a << 2;
    MyBitwiseClass result_shift_right = a >> 2;

    // Printing results
    result_and.print(); 
    result_or.print();  
    result_xor.print(); 
    result_not.print();  
    result_shift_left.print();   
    result_shift_right.print(); 

    return 0;
}
