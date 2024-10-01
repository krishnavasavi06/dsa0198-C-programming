#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 15;
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "Largest number: " << largest << endl;
    return 0;
}
