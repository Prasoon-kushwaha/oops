#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class student {
    private:
       char name [50];
       int age;
    public:void getdata(){
       cin >> name ;
    }
    void showdata(){
        cout << name;
    }     

};

int main(){
   student s;
   ofstream file ;
   file.open("field.text",ios::out);
   if (!file){
     cout << "Unable to open theq file";  
     return 1;                         
   }
   cout << "file open successfully";
   s.getdata();
   file.write((char*)&s,sizeof(s));
   file.close();

  ifstream file1;
  file1.open("file1.text",ios::in);
  file1.read( (char *) &s , sizeof(s));
  s.showdata();
  file1.close();
  return 0;


}