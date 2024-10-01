#include <iostream>
using namespace std;

int main() {
    int num = 9;
    string result = (num % 3 == 0) ? "Divisible by 3" : "Not divisible by 3";

    cout << result << endl;
    return 0;
}
