#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ofstream outf("t1.txt");
    outf<<"This is a begining of para"<<"\n";
    outf<<"this is END of "<<"\n";
    outf.close();
 
    string line1 ,line2;

    ifstream inf("t1.txt");
    // inf >> line1;
    // inf>>line2;
    // getline(inf,line1);  // to read complete line
    // getline(inf,line2);
    int ctr=0;
    string lines;
    while(!(inf.eof())){
        // getline(inf,lines);
         inf >> lines;
         ctr++;
        cout<<lines<<endl;
    }
    cout <<ctr<<endl;
    inf.close();
    
    // cout<<line1<<endl;
    // cout<<line2<<endl;
}