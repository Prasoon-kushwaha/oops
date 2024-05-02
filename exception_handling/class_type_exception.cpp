#include <iostream>
#include <cstring> // For strlen and strcpy

class Error {
private:
    int err_code;
    char *err_desc;

public:
    // Constructor
    Error(int c, const char* d) : err_code(c) {
        // Allocate memory for the error description and copy the string
        err_desc = new char[strlen(d) + 1]; // +1 for the null terminator
        strcpy(err_desc, d);
    }

    // Destructor to release memory
    ~Error() {
        delete[] err_desc;
    }

    // Method to display the error
    void err_display() {
        std::cout << "Error " << err_code << ": " << err_desc << std::endl;
    }
};

int main() {
    try {
        // No need for getch() and conio.h in C++
        // getch();

        // Throwing an Error object
        throw Error(99, "test");

    } catch (Error& e) { // Catch the exception by reference
        std::cout << "Exception caught" << std::endl;
        e.err_display();
    }

    // No need for getch() at the end
    // getch();

    return 0;
}
