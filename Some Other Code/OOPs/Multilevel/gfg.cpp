#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
 


    long long countWays(int N) {
    
            return 1+N/2;
        
        
    }
};

int main() {
    Solution S;
    cout << S.countWays(4);
    return 0;
}
