#include<iostream>
using namespace std;

class base{
    public:
    void display(){
        cout<<"dispaly Base"<<endl;
    }
    virtual void show(){
        cout<<"show Base"<<endl;
    }
};

class derived:public base{
    public:
    void display(){ 
        cout<<"display Derived"<<endl ;
    }
    virtual void show(){ 
        cout<<"show Derived"<<endl ;
    }
};


int main(){
 base B;
 derived D;
 base*bptr;
 bptr=&B;
 bptr->display();
 bptr->show();
 bptr=&D;
 bptr->display();
 bptr->show();

}