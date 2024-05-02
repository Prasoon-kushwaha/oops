#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    long long numberOfWays(string s) {
        vector<long long >v1(s.size(),0);
        vector<long long >v0(s.size(),0);
        if (s[0]=='1'){v1[0]=1;v0[0]=0;} else {v1[0]=0;v0[0]=1;}
        for (int i=1;i<s.size();i++)
        {
            if (s[i]=='0')
            {
                v0[i]=v0[i-1]+1;
                v1[i]=v1[i-1];
            }
            else{
                v0[i]=v0[i-1];
                v1[i]=v1[i-1]+1;
            }
        }

        //preprocessing done
        long long int ans=0;

        for (int i=1;i<s.size()-1;i++)
        {
            long long int left,right;
            if (s[i]=='0')
            {
                //check for ones
                left=v1[i-1]; //prefix
                right=v1[v1.size()-1]-v1[i]; //postfix 
            }
            else
            {
                left=v0[i-1];
                right=v0[v1.size()-1]-v0[i];
            }
            ans+=left*right;
        }
        return ans;

    }
};

int main()
{
    Solution s;
    cout<<s.numberOfWays("001101")<<endl;
}