#include <iostream>
#include <unordered_map>

using namespace std;

int happy(int n) {
    int res = 0;
    while (n) {
        int a = n%10;
        res += a*a;
        n /= 10;
    }
    return res;
}

bool isHappy(int n) {
    // write your code here
    unordered_map<int, bool> m;
    m[n] = true;
    while (n != 1) {
        n = happy(n);
        if (m.find(n) != m.end()) {
            return false;
        }
        m[n] = true;
    }
    return true;
}

int main() {
    return 0;
}
