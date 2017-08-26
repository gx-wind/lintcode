#include <iostream>

using namespace std;

int reverseInteger(int n) {
    // write your code here
    long long res = 0;
    while (n) {
        res = res*10+n%10;
        n /= 10;
    }
    if (res > INT_MAX || res < INT_MIN)
        return 0;
    return int(res);
}

int main() {
    return 0;
}
