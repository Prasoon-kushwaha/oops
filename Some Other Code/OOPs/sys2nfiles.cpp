#include <bits/stdc++.h>
#include <fcntl.h>
#include <unistd.h>
using namespace std;

struct op{

};
int main() {
    int fl = open("file2.txt", O_WRONLY); // O_CREAT flag creates the file
    if (fl == -1) {
        cout <<"ERROR"<<endl;
        return 1;
    }

    close(fl);

    return 0;
}
