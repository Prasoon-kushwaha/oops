#include<iostream>
using namespace std;

int main(){
cout.fill('$');
cout.precision(3);
for(int i=1;i<=6;i++){
    cout.width(10);
    cout<<1.0/float(i)<<endl;
    if(i==3) cout.fill('%');
}


}