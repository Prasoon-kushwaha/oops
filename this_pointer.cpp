#include<iostream>
using namespace std;

class Person{
int income;
float age;
public:
Person(int income,float age){
    this->income=income;
    this->age=age;
}
Person & greater(Person& x){
    if(x.age>=age) return x;
    else return *this;
}
void show(){
    cout<<"income is : "<<income<<endl;
    cout<<"age is"<<age<<endl;
}
};


int main(){
Person A(2500,42.02),B(3600,36.21),C(4200,42.23);
Person P = A.greater(B);
cout<<"Elder person is: "<<" "<<endl;
P.show();
}
