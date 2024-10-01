#include <iostream>
using namespace std;

void sum(int a[], int b[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = a[i] + b[i];
    }
}

void sum(int a[2][2], int b[2][2], int result[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int resultArr[3];
    sum(arr1, arr2, resultArr, 3);
    cout << "Sum of arrays: ";
    for (int i = 0; i < 3; ++i) {
        cout << resultArr[i] << " ";
    }
    cout << endl;

    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int resultMat[2][2];
    sum(mat1, mat2, resultMat);
    cout << "Sum of matrices: " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << resultMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
