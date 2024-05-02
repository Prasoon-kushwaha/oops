#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
      int i = 0;
        string result = "";
        int n = s.length();
        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (i >= n) break;
            int j = i + 1;
            while (j < n && s[j] != ' ') {
                j++;
            }
            string w = s.substr(i, j - i);
            result = w + " " + result;
            i = j + 1;
        }
        // Remove trailing space if result is not empty
        if (!result.empty()) {
            result.pop_back();
        }
        return result;

    }
    
    int main(){
      string s = "I am abhay";
      string rev = reverseWords(s);
      for(auto x:rev){
        cout<<x<<" ";
    }
    }