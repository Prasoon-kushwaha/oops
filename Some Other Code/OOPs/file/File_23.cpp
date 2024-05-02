#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream fp;
    string Data="";

    int n;
    cout <<"Enter the no of student :"<<endl;
    cin>>n;
    while (n--)

    {
      cout <<"NAME : \n";
      string name;cin>>name;
      Data+="Name : "+name+"\n";

      cout <<"Roll : \n";
      cin>>name;
      Data+="Roll : "+name+"\n";

      cout <<"Phone : \n";
      cin>>name;
      Data+="Ph No : "+name+"\n\n";

    }
    fp.open("Student_DATA.txt",ios::out);
    fp<<Data;
    

}