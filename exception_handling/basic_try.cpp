#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter value of a and b \n";
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x!=0) cout<<a/x<<endl;
        else throw(x);
    }
    catch(int i)
    {
        cout<<"Exception caught"<<endl;
    }
    cout<<"heyv thes";
    
}