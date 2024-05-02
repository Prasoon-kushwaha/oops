#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream file_out;
    file_out.open("ABC");
    file_out<<"This is some text";
    file_out <<"This is some other string";
    file_out.close();
    file_out.open("XYZ");
    file_out<<">>>> This is some text";
    file_out <<">>>> This is some other string";
    file_out.close();

    int N=80;
    char line[N];
    ifstream fin;

    fin.open("ABC");
    while (fin)
    {
        fin.getline(line,N);
    }
    

};
