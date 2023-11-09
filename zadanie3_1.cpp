#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float x = 0;
    float y = 0;

    cout << "Podaj wartość dla 'x': ";
    cin >> x;    
    cout << "Podaj wartość dla 'y': ";
    cin >> y;
    
    // cout << "Suma x i y: " << x + y << setprecision(2) << endl;
    // cout << "Różnica x i y: " <<  x - y << setprecision(2) << endl;
    // cout << "Iloczyn x i y: " << x * y << setprecision(2) << endl;
    // cout << "Iloraz x i y: " << x / y << setprecision(2) << endl;

    cout.precision(2);

    cout << "Suma x i y: " << x + y << endl;
    cout << "Różnica x i y: " <<  x - y << endl;
    cout << "Iloczyn x i y: " << x * y << endl;
    cout << "Iloraz x i y: " << x / y << endl;

    return 0;
}