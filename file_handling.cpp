#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream fp;
    char buf[100];
    int pas;
    fp.open("ITEM",ios::out|ios::ate);
    fp<<"Hello";

//   fp.open("ITEM",ios::app);
//   fp<<"new";
 
    pas = fp.tellg();
    fp.seekp(15,ios::cur);
    fp<<"Hi";
    fp.seekp(7,ios::beg);
    fp<<"World";
    fp.close();


}
