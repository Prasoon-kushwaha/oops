#include<iostream>
using namespace std;

int main(){
int x[]={12,25,30,55,110};
int *p=x;
while(*p<110){
    if(*p%3!=0) *p+=1;
    else *p+=2;
    p++;
}
for(int i=4;i>=1;i--){
    cout<<x[i]<<" ";
}

}