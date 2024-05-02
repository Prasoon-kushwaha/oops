#include<bits/stdc++.h>
using namespace std;
string ds="";

void solve_Subsequences(int ind, vector<vector<char>> &ans, vector<char> &ds, string &str){
        if(ind >= str.size()){
            ans.push_back(ds);
            return;
        }
        // pick
        ds.push_back(str[ind]);
        solve_Subsequences(ind+1, ans, ds, str);
        ds.pop_back();
        // not pick
        solve_Subsequences(ind+1, ans, ds, str);
    }

int main(){
    string a ="abc";
    vector<vector<char>> ans;
    vector<char> ds;
    solve_Subsequences(0,ans,ds,a);
    
}