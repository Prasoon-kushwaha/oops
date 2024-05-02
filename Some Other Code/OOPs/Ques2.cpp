#include<bits/stdc++.h>
using namespace std;

class Staff
{
    public:
    string Name;
    int code;
    Staff(string n,int c){Name=n;code=c;}

};

class Teacher : public Staff
{
    public:
    string subject;
    string  Publication;

    Teacher(int no,string s,string sub,string pubuli): Staff(s,no),subject(sub),Publication(pubuli) {};

};

class Officer : public Staff
{
    public:
    string grade;

    Officer(int no, string s,string gre): Staff(s,no),grade(gre) {};
};

class Typer : public Staff {
public:
    int speed;
    Typer(int no, string s, int gre) : Staff(s, no), speed(gre) {}
};

class Reg_Type : public Typer {
public:
    Reg_Type(int no, string s, int gre) : Typer(no, s, gre) {}
};

class casual : public Typer
{
    public:
    int daily;
    int wages;

    casual(int no, string s, int gre,int dai,int wag): Typer(no, s, gre) ,daily(dai),wages(wag){};
};


int main()
{

}