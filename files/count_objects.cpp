#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class emp {
    char name[30];
    int ecode;
public:
    emp() {}
    emp(char *n, int c) {
        strcpy(name, n);
        ecode = c;
    }
   
    void display() {
        cout << "Name: " << name << ", Ecode: " << ecode << endl;
    }
};

int main() {
    emp e[1];
    e[0] = emp("alice", 1);

   
    fstream file("emp.txt", ios::out | ios::binary);
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }


    file.write(reinterpret_cast<char *>(&e[0]), sizeof(emp));

    file.close();

    // Open file for reading
    file.open("emp.txt", ios::in | ios::binary);
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Read data from the file
    emp e_read;
    file.read(reinterpret_cast<char *>(&e_read), sizeof(emp));

    // Display the data read from the file
    e_read.display();

    // Close the file
    file.close();

    return 0;
}
