#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string value;

public:
    MyString(const string& str) : value(str) {}

    // Overloading the concatenation operator
    MyString operator+(MyString& other) {
        return MyString(value + other.value);
    }

    // Overloading the equality operator
    bool operator==(MyString& other) {
        return value == other.value;
    }

    // Overloading the inequality operator
    bool operator!=(MyString& other) {
        return value != other.value;
    }

    // Overloading the less than operator
    bool operator<(MyString& other) {
        return value < other.value;
    }

    // Overloading the less than or equal to operator
    bool operator<=(MyString& other) {
        return value <= other.value;
    }

    // Overloading the greater than operator
    bool operator>(MyString& other) {
        return value > other.value;
    }

    // Overloading the greater than or equal to operator
    bool operator>=(MyString& other) {
        return value >= other.value;
    }

    // Function to get the value of the string
    string getValue() {
        return value;
    }
};

int main() {
    MyString s1("Namaste ");
    MyString s2("Duniya");


    MyString concatenated = s1 + s2;
    cout << "Concatenated string: " << concatenated.getValue() << endl;


    cout << boolalpha;
    cout << "Equality: " << (s1 == s2) << endl;
    cout << "Inequality: " << (s1 != s2) << endl;
    cout << "s1 < s2: " << (s1 < s2) << endl;
    cout << "s1 <= s2: " << (s1 <= s2) << endl;
    cout << "s1 > s2: " << (s1 > s2) << endl;
    cout << "s1 >= s2: " << (s1 >= s2) << endl;

    return 0;
}
