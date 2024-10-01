#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch)) {
        ch = tolower(ch); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout << "It's a vowel." << endl;
        else
            cout << "It's a consonant." << endl;
    } else {
        cout << "Invalid input (not an alphabet)." << endl;
    }

    return 0;
}
