#include <iostream>
#include <iomanip> // Include the <iomanip> header for manipulators

using namespace std;

int main() {
    double number = 123.456789;

    // Set precision to 3 decimal places
    cout << "Precision set to 3 decimal places: " << fixed << setprecision(3) << number << endl;

    // Set width to 10 characters
    cout << "Width set to 10 characters: " << setw(10) << number << endl;

    // Combined width and precision
    cout << "Width set to 10 characters and precision to 2 decimal places: " << setw(10) << setprecision(2) << number << endl;

    float pi=22.0/7.0;
    int i;
    cout<<endl;
    cout<<"value of pi: "<<endl;
    for(int i=1;i<=10;i++){
        cout.width(i+1);
        cout.precision(i);
        cout<<pi<<endl;
    }

    return 0;
}
