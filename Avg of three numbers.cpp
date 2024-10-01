#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three integers (e.g., 23 41 35): ";
    cin >> num1 >> num2 >> num3;

    float average = float>(num1 + num2 + num3) / 3;
    cout << "Average: " << average << endl;

    return 0;
}
