#include<iostream>
using namespace std;

int main(){
int cnt=0;
char c;
cout<<"Enter text \n";
cin.get(c);
while(c!='\n'){
    cout.put(c);
    cnt++;
    cin.get(c);
}
cout<<"\n";
cout<<"number of characters is: "<<cnt;

}
