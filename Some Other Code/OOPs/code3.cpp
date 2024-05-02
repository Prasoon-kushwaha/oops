#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
      vector<int>v(n,0);
      vector<int>v2(n,0);

      for (int i=0;i<trust.size();i++)
      {
        v[trust[i][1]]++; //trusted by other
        v2[trust[i][0]]++;   // who is trusting
      }

      int idx =-1;
      int cnt=0;
      for (int i=0;i<n;i++)
      {
        if (v2[i]==0 && v[i]==n-1)
        {
          idx=i+1;
          cnt++;
        }
      }
      if (cnt>1) return 0;
      return idx;
        
    }
};
int main()
{
    Solution s;
    // cout << "ans: "<<s.rangeBitwiseAnd(3,6)<<endl;
    cout << pow(2,31)-1;
}