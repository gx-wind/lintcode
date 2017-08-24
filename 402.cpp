#include <iostream>
#include <vector>

using namespace std;

vector<int> continuousSubarraySum(vector<int>& A) {
    // Write your code here
    vector<int> v;
    if (A.size() == 0)
        return v;
    int maxValue = A[0], pre =A[0];
    int b = 0, e = 0;
    v.push_back(b);
    v.push_back(e);
    for (int i = 1; i < A.size(); i++) {
        if (pre > 0) {
            pre += A[i];
            e = i;
        } else {
            pre = A[i];
            b = e = i;
        }
        if (pre > maxValue) {
            maxValue = pre;
            v.clear();
            v.push_back(b);
            v.push_back(e);
        }
    }
    return v;
}

int main() {
    return 0;
}
