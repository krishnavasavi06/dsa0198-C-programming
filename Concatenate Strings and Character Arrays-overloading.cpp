#include <iostream>
#include <string>
using namespace std;

string concatenate(string a, string b) {
    return a + b;
}

string concatenate(char a[], char b[]) {
    string str1(a);
    string str2(b);
    return str1 + str2;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    char arr1[] = "Hello, ";
    char arr2[] = "World!";
    
    cout << "Concatenated strings: " << concatenate(str1, str2) << endl;
    cout << "Concatenated char arrays: " << concatenate(arr1, arr2) << endl;
    return 0;
}
