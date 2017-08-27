#include <iostream>
#include <vector>

using namespace std;

long long houseRobber(vector<int> A) {
    // write your code here
    long long res = 0;
    if (A.size() == 0)
        return 0;
    if (A.size() == 1)
        return A[0];
    long long pre1 = A[0], pre2 = A[1];
    long long cur;
    for (int i = 2; i < A.size(); i++) {
        cur = max(pre1+A[i], pre2);
        res = max(res, cur);
        pre1 = pre2;
        pre2 = cur;
    }
    return res;
}

int main() {
    return 0;
}
