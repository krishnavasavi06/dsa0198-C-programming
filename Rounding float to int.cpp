#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    int roundedDown = floor(num);
    int roundedUp = ceil(num);

    cout << "Rounded down: " << roundedDown << endl;
    cout << "Rounded up: " << roundedUp << endl;

    return 0;
}
