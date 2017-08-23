#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int> &A, int elem) {
    // write your code here
    if (A.size() == 0)
        return 0;
    int j = 0;
    for(int i = 0; i < A.size(); i++) {
        if (A[i] != elem) {
            A[j++] = A[i];
        }
    }
    A.resize(j);
    return j;
}

int main() {
    return 0;
}
