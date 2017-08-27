#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> A) {
    // write your code here
    if (A.size() == 0)
        return 0;
    int res = A[0];
    for (int i = 1; i < A.size(); i++) {
        res ^= A[i];
    }
    return res;
}

int main() {
    return 0;
}
