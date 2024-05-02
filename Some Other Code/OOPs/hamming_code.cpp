#include<bits/stdc++.h>


using namespace std;

int main() {
    bitset<4> data("1100");

    bitset<7> hammingCode;

    hammingCode[2] = data[0];
    hammingCode[4] = data[1];
    hammingCode[5] = data[2];
    hammingCode[6] = data[3];

 
    hammingCode[0] = hammingCode[2] ^ hammingCode[4] ^ hammingCode[6];
    hammingCode[1] = hammingCode[2] ^ hammingCode[3] ^ hammingCode[6];
    hammingCode[3] = hammingCode[4] ^ hammingCode[5] ^ hammingCode[6];

    cout << "Original Data: " << data << endl;
    cout << "Hamming Code: " << hammingCode << endl;

    return 0;
}