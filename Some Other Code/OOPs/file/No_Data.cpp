#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main() {
    
    ofstream file("example.txt");
    file << "Hello, 123 world!";
    file.close();   
    ifstream infile("example.txt");

    char ch;
    int alphabetCount = 0, digitCount = 0, spaceCount = 0;

    
    while (infile.get(ch)) {
        if((ch>='a' && ch<='z')||(ch>='A'&& ch<='Z')){
            alphabetCount++;
        }
        else if (ch>='0'&& ch<='9') {
            digitCount++;
        }
         else if (ch==' ') {
            spaceCount++;
        }
    }
    infile.close();

  
    cout << "Alphabets: " << alphabetCount << endl;
    cout << "Numbers: " << digitCount << endl;
    cout << "Spaces: " << spaceCount << endl;

}
