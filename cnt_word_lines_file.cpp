#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream file("filename.txt");
    if (!file.is_open()) {
        cout << "Unable to open file\n";
        return 1;
    }
int cnt=0;

    // int line_count = 0;
    // int word_count = 0;
    // string line;
    // while (getline(file, line)) {
    //     ++line_count;
    //     istringstream iss(line);
    //     string word;
    //     while (iss >> word) {
    //         ++word_count;
    //     }
    // }

    // cout << "Number of lines: " << line_count << '\n';
    // cout << "Number of words: " << word_count << '\n';
string words;
while(!file.eof()){
file>>words;
cout<<words<<endl;
cnt++;
}
cout<<cnt;

    return 0;
}
