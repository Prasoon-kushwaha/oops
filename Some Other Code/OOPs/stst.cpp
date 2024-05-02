#include<bits/stdc++.h>
using namespace std;
class oops
{
    static int count;
    int number;
    public:
    void put_data(int a)
    {
        number=a;
        count ++;
    }
    void getdata()

    {
        cout <<number <<endl;
    }
    void cnt()
    {
        cout <<count<<endl;
    }
    
};
int oops::count=0;

int main()
{
    oops s,s2;
    s.put_data(23);
    s.getdata();
    s.put_data(24);
    s.getdata();
    s.cnt();
    s2.cnt();
    
}