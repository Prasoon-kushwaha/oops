#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the name of File" << endl;
    cin >> s;

    // Opening a file named "item" for writing
    ofstream outf("item"); //outfull

    // Writing the input file name to the file
    outf << s;

    // Closing the output file stream
    outf.close();

    // Opening the file "item" for reading
    ifstream inf("item"); //input fule
    // Reading the content from the file into variable s
    inf >> s;
    // Displaying the content of the file on the console
    cout << "Name: " << s;
    inf.close();
}
