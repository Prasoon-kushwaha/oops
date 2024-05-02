#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ofstream outf("ITEM");
    cout<<"Enter item name"<<endl;
    string name;
    cin>>name;
    outf<<name;
    outf.close();
    ifstream inf("ITEM");
    string line;
    inf>>line;
    cout<<line;

}