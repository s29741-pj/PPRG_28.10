#include <iostream>
#include <string>
using namespace std;

int main () {

    char inputChar;
    char stopSign = 't';

    while (true) {
        cout << "Podaj znak: ";
        cin >> inputChar;
        if(inputChar != stopSign) {
            cout << inputChar << endl;
        }else {
            break;
        }
    }

    return 0;
}