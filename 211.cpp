#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool Permutation(string A, string B) {
    // write your code here
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    return A == B;
}

int main() {
    return 0;
}
