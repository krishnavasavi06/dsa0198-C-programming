#include <iostream>
#include <string>
using namespace std;

int countElements(string str) {
    return str.length();
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Number of elements in the string: " << countElements(str) << endl;

    return 0;
}
