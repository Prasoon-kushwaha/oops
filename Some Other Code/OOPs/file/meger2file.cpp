#include<bits/stdc++.h>
#include<fstream>
using namespace  std;

int main()
{
    //merge2 file
    ofstream outf("MERGED");
    ifstream inf1("ABC"),inf2("XYZ");
    string line;

    while (getline(inf1, line)) {
        outf << line << endl;
    }
    while (getline(inf2, line)) {
        outf << line << endl;
    }


    inf1.close();
    inf2.close();
    outf.close();
    
    
}

