#include <iostream>
#include <fstream>
using namespace std;

bool isdigit(char ch) {
    return ch >= '0' && ch <= '9';
}

bool isalpha(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool isspace(char ch) {
    return ch == ' ' || ch == '\n' || ch == '\t';
}

int main() {
    ifstream file("ITEM");
    if (!file) {
        cout << "Unable to open file";
        return 1;
    }

    int digitCount = 0, alphaCount = 0, spaceCount = 0;
    char ch;

    while (file.get(ch)) {
        if (isdigit(ch)) digitCount++;
        else if (isalpha(ch)) alphaCount++;
        else if (isspace(ch)) spaceCount++;
    }

    file.close();

    cout << "Digits: " << digitCount << endl;
    cout << "Alphabets: " << alphaCount << endl;
    cout << "Spaces: " << spaceCount << endl;

    return 0;
}
