#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm> 
#include <sstream> 
using namespace std;

struct Student {
    string name;
    int age;
    string grade;
};

void writeStudentDetails(const string& filename, const vector<Student>& students) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Unable to open file: " << filename << endl;
        return;
    }

    for (const auto& student : students) {
        outFile << student.name << "," << student.age << "," << student.grade << endl;
    }

    outFile.close();
}

vector<Student> readStudentDetails(const string& filename) {
    ifstream inFile(filename);
    vector<Student> students;

    if (!inFile) {
        cerr << "Unable to open file: " << filename << endl;
        return students;
    }

    Student student;
    string line;
    while (getline(inFile, line)) {
        stringstream ss(line);
        getline(ss, student.name, ',');
        ss >> student.age;
        getline(ss >> ws, student.grade);
        students.push_back(student);
    }

    inFile.close();
    return students;
}

void deleteStudent(const string& filename, const string& studentName) {
    vector<Student> students = readStudentDetails(filename);

    auto it = remove_if(students.begin(), students.end(), [&studentName](const Student& s) {
        return s.name == studentName;
    });

    students.erase(it, students.end());

    writeStudentDetails(filename, students);
}

int main() {
    vector<Student> students = {
        {"Abhay", 20, "A"},
        {"Aditya", 21, "B"},
        {"Chaman", 22, "C"}
    };

    // Write 
    writeStudentDetails("student_details.txt", students);

    // Delete 
    deleteStudent("student_details.txt", "Bob");

    // Read
    cout << "Updated Student Details:" << endl;
    vector<Student> readStudents = readStudentDetails("student_details.txt");
    for (const auto& student : readStudents) {
        cout << "Name: " << student.name << ", Age: " << student.age << ", Grade: " << student.grade << endl;
    }

    return 0;
}
