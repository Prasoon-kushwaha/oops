#include<bits/stdc++.h>
using namespace std;

void test(int x)
{

    try 
    {
        if (x==1) throw x;
        else if (x==-1)
        {
            throw 1.0;
        }
        cout <<"end of Try block";
        
    }
}