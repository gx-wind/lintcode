#include <iostream>
#include <vector>

using namespace std;

int longestIncreasingContinuousSubsequence(vector<int> A) {
    // write your code here
    if (A.size() == 0)
        return 0;
    int res = 1;
    int preAsc = 1;
    int preDesc = 1;
    for (int i = 1; i < A.size(); i++) {
        if (A[i] > A[i-1]) {
            preAsc = preAsc+1;
            preDesc = 1;
        } else {
            preAsc = 1;
            preDesc = preDesc+1;
        }
        res = max(res, preAsc);
        res = max(res, preDesc);
    }
    return res;
}

int main() {
    return 0;
}
