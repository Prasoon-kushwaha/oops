#include<bits/stdc++.h>
using namespace std;

vector<int> bitManipulation(unsigned int num, int i) {
    vector<int> ans;
    
    // Get the bit value at the "i"th position of "num".
    int bitValue = (num >> (i - 1)) & 1;
    ans.push_back(bitValue);

    // Set the bit at the "i"th position of "num".
    unsigned int numSet = num | (1 << (i - 1));
    ans.push_back(numSet);

    // Clear the bit at the "i"th position of "num".
    unsigned int numCleared = num & ~(1 << (i - 1));
    ans.push_back(numCleared);

    return ans;
}

int main() {
    unsigned int num;
    int i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the index i: ";
    cin >> i;

    vector<int> result = bitManipulation(num, i);
    cout << "Bit at index " << i << ": " << result[0] << endl;
    cout << "Decimal when bit at index " << i << " is set to 1: " << result[1] << endl;
    cout << "Decimal when bit at index " << i << " is set to 0: " << result[2] << endl;

    return 0;
}
