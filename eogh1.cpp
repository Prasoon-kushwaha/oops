#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 int n=4;
        vector<int> bin;
        while(n!=0){
            bin.push_back(n%2);
            n=n/2;
        }
        reverse(bin.begin(),bin.end());
      for(auto i: bin) cout<<i<<" ";
        cout<<endl;
int k=bin.size();
        vector<int> ans(k,0);
        ans[0]=bin[0];
       
        for(int i=0;i<k-1;i++){
            ans[i+1]=bin[i]^bin[i+1];
        }

for(auto i: ans) cout<<i<<" ";

}