#include <iostream>
#include <vector>

using namespace std;

int findPosition(vector<int>& A, int target) {
    // Write your code here
    int b = 0, e = A.size()-1;
    while (b <= e) {
        int m = (b+e)/2;
        if (A[m] == target)
            return m;
        else if (A[m] > target)
            e = m-1;
        else 
            b = m+1;
    }
    return -1;
}

int main() {
    return 0;
}
