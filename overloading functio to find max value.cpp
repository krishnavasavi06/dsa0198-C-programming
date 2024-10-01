#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

float max(float a, float b) {
    return (a > b) ? a : b;
}

char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 3 and 5: " << max(3, 5) << endl;
    cout << "Max of 3.5 and 2.5: " << max(3.5f, 2.5f) << endl;
    cout << "Max of 'a' and 'b': " << max('a', 'b') << endl;
    return 0;
}
