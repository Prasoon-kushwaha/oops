#include <iostream>
#include <fstream>
using namespace std;

class student {
private:
    char name[30];
    int age;
public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void showdata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    student s;
    ofstream file;
    file.open("file1.txt", ios::out | ios::binary);
    if (!file) {
        cout << "Error in opening the file";
        return 0;
    }
    cout << "File opened successfully" << endl;
    s.getdata();
    file.write((char*)&s, sizeof(s));
    file.close();

    ifstream file1;
    file1.open("file1.txt", ios::in | ios::binary);
    if (!file1) {
        cout << "Error in opening the file";
        return 0;
    }
    file1.read((char*)&s, sizeof(s));
    s.showdata();
    file1.close();
    return 0;
}
