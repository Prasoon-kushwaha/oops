#include<bits/stdc++.h>
using namespace std;

int multiply(int m, int n) {
    long long result = 1; // Using long long to prevent overflow
    while (n--) {
        result *= m;
    }
    return (int)result; // Cast back to int for function signature compliance
}

int NthRoot(int n, int m) {
    int start = 1, end = m, result = -1;
    if (m <= 1) return m; // Base cases: 0 and 1 have same square root
       
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (multiply(mid, n) <= m && multiply(mid + 1, n) > m) {
            return mid;
        } else if (multiply(mid, n) < m) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
        
    return result;
}

int main(){
    int ans=NthRoot(4,69);
    cout<<ans<<endl;
}