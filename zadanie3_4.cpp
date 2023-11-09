#include <iostream>
#include <vector>
using namespace std;

int main() {

    int rows = 0;
    int currentNumber = 0;
    vector<int>lastRow{0,1}; 
    vector<int>newRow{};

// zabezpieczenie wprowadzanych wartości
    while(rows <= 0){
        cout << "Podaj ilość wierszy: ";
        cin >> rows;
        cout << endl;
    }


    cout << "Trójkąt Pascala dla " << rows << " wierszy." << endl;
    cout << endl;

// drukowanie kolejnych wierszy
    for(int i = 0; i <= rows; i++){
        for(int i = 0; i <= lastRow.size(); i++){
            if(lastRow.at(i+1) == lastRow.back()){
                currentNumber = lastRow.at(i) + lastRow.back();
                newRow.push_back(currentNumber);
                break;
            }else {
                currentNumber = lastRow.at(i) + lastRow.at(i+1);
            }
            newRow.push_back(currentNumber);
        }

        for(int n: newRow){
            cout << n << " ";
        }

        newRow.insert(newRow.begin(), 0);
        newRow.insert(newRow.end(), 0);
        lastRow.clear();

        for (int j: newRow) {
            lastRow.push_back(j);
        }
        newRow.clear();
        cout << endl;
    }
    
    cout << endl;

    return 0;
}