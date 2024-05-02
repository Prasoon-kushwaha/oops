#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int roll;
};

class CSE : public student {
public:
    string department;

    // Constructor for CSE class
    CSE(string _name, int _roll, string _department) : department(_department) {
        name = _name;
        roll = _roll;
    }
};

class IIITU : public CSE {
public:
    string college;

    // Constructor for IIITU class
    IIITU(string _name, int _roll, string _department, string _college) : 

     CSE(_name, _roll, _department) {

        college=_college;
        
    }};

int main() {
    IIITU student1("Prasoon", 22146, "CSE", "IIITU");

    // Accessing inherited members
    cout << "Name: " << student1.name << endl;
    cout << "Roll: " << student1.roll << endl;
    cout << "Department: " << student1.department << endl;
    cout << "College: " << student1.college << endl;

    return 0;
}
