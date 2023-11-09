#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float a = 0;
    float b = 0;
    float c = 0;
    float xOne = 0;
    float xTwo = 0;
    float delta = 0;

    cout.precision(2);

    cout << "ax^2 + bx + c = 0" << endl;

    cout << "Podaj wartość dla \"a\": ";
    cin >> a;
    
    cout << "Podaj wartość dla \"b\": ";
    cin >> b;

    cout << "Podaj wartość dla \"c\": ";
    cin >> c;
    
    cout << "Równanie kwadratowe dla podanych liczb to: " << a << "x^2 + "<< b << "x + " << c << " = 0" << endl;

    delta = pow(b, 2) - 4*(a*c);

    cout << "Delta = " << delta << endl;

    if (delta > 0) {
        xOne = ((b * -1) - sqrt(delta)) / (2 * a);
        xTwo = ((b * -1) + sqrt(delta)) / (2 * a);

        cout << "x1 = " << xOne << endl;
        cout << "x2 = " << xTwo << endl;
    }
    else if(delta == 0){
        xOne = (b * -1) / (2 * a);
        cout << "x1 = " << xOne << endl;
    }
    else {
        cout << "Delta < 0";
    }

    return 0;
}