#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[]={12,25,30,55,110};
    int *p=x;
    while (*p<110)
    {
        if (*p%3==0)
        {
            *p=*p+1;
        }
        else
        {
            *p=*p+2;
        }
        p++;
    }

    // 13 27 31 57

    for (int i=4;i>=0;i--)
    {
        cout <<x[i]<<" ";
    }
    cout << endl;
    // 110 57 31 27 13 ans
}