#include<iostream>
using namespace std;

class item {
    
    int number;
public: 
static int count;
    static void ShowCount() {
        cout << count << endl;
    }

    void getData(int a) {
        number = a;
        count++;
    }

    void getCount() {
        cout << count << endl;
    }
};

int item::count = 0; 

int main() {
    item m[3];
    for (int i = 0; i < 3; i++) {
        m[i].getData(100);
        m[i].getCount();
    }
    item a, b;
    a.getData(200);
    a.getCount();
    b.getCount();
    
    cout<<item::count<<endl;
    item::ShowCount();

    return 0;
}
