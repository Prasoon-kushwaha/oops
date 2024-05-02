#include <iostream>
using namespace std;

class Math {
public:
    int no;
    void putm(int z) {no=z;} 
};

class Eng {
public:
    int no;
    void pute(int x){ no=x ;} // Initi
};

class Total : public Eng, public Math {
public:
    int total;
  
    Total(int eng, int mat) {
        putm(mat);
        pute(eng);
        total = eng+mat;
    }
};


int main() {
    Total t = Total(23, 45);
    cout << t.total << endl;
    cout <<t.Eng::no<<endl;

    return 0; // Added return statement to main function
}
