#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    string name;
    int roll_no;
    
    public:
    student(string name2,int roll) //constructor
    {
        name=name2;
        roll_no=roll;
    }

    void display()
    {
        cout << name<<endl<<roll_no<<endl;

    }
        void getdata(bool a=1) //default
    {
        if (a)
        {
            cout <<roll_no<<endl;
        }
        else
        {
            cout <<name<<endl;
        }

    }

};

int main()
{
    student s1("Piyush",22145);

    s1.display();
    s1.getdata(0);
    return 0;

}