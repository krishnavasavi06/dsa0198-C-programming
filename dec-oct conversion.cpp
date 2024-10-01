#include <iostream>
using namespace std;

int main() {
    int decimalNumber, remainder;
    int octalNumber[100], i = 0;
    cout<<"enter the dec number: ";
    cin >> decimalNumber;
    
    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        octalNumber[i] = remainder;
        decimalNumber /= 8;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--)
        cout << octalNumber[j];
    
    return 0;
}
