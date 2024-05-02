#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ofstream outf("t2.txt");
    outf<<"Piyush Yadav";

    outf.close();
    
    ofstream outf2;
    outf2.open("t2.txt",ios::app );

    outf2<<" is my name.";
    outf2.close();

}