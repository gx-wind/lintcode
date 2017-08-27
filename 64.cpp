#include <iostream>

using namespace std;

void mergeSortedArray(int A[], int m, int B[], int n) {
    // write your code here
    int i = m-1, j = n-1;
    int k = m+n-1;
    while (i >= 0 && j >= 0) {
        if (A[i] > B[j]) {
            A[k--] = A[i];
            i--;
        } else {
            A[k--] = B[j];
            j--;
        }
    }
    while (i >= 0) {
        A[k--] = A[i];
        i--;
    }
    while (j >= 0) {
        A[k--] = B[j];
        j--;
    }
}

int main() {
    return 0;
}
