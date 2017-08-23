#include <iostream>

using namespace std;

int countOne(int a) {
    int res = 0;
    while (a) {
        a = a&(a-1);
        res++;
    }
    return res;
}

int bitSwapRequired(int a, int b) {
    // write your code here
    return countOne(a^b);
}

int main() {
    return 0;
}
