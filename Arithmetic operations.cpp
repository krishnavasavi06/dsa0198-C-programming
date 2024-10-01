#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
    float num1, num2;
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;
    cout << "Modulo: " << fmod(num1, num2) << endl;

    return 0;
}
