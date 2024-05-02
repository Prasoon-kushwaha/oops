#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(k+2, INT_MAX)));


        for (int i=0;i<flights.size();i++) {
            int st = flights[i][0], ed = flights[i][1], pri = flights[i][2];
            dp[st][ed][0] = pri; // Price for no stop
        }

        for (int z = 1; z <= k; ++z) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    // for k stops
                    dp[i][j][z] =dp[i][j][z-1] ;
                    for (int r = 0; r < n; ++r) {

                        if (dp[i][r][z-1] != INT_MAX && dp[r][j][0] != INT_MAX) { //overflow checking
                            dp[i][j][z] = min(dp[i][j][z], dp[i][r][z-1] + dp[r][j][0]);
                        }
                    }
                }
            }
        }

        return dp[src][dst][k] == INT_MAX ? -1 : dp[src][dst][k];
    }
};

int main() {
    vector<vector<int>> v = {{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
    Solution s;
    cout << s.findCheapestPrice(4, v, 0, 3, 1) << endl;
    return 0;
}
