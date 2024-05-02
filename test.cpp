#include<iostream>
using namespace std;

class Player{
    int Id;
    static int next_Id;

    public:
    int getID(){return Id;}
    Player() {Id=next_Id++;}

};

int Player::next_Id=1;
int main(){
    Player p1,p2,p3;
    cout<<p1.getID()<<" ";
    cout<<p2.getID()<<" ";
    cout<<p3.getID()<<" ";
}