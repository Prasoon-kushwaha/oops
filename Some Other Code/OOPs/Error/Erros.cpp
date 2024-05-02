#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    int a=34;
    try{
        if (x!=0)
        {
            cout <<"Result: "<<a/x;
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout << "Exception caught : x = "<<x;
    }
    cout <<endl;
}