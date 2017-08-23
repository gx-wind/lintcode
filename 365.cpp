#include <iostream>

using namespace std;

int countOnes(int num) {
    // write your code here
    int res = 0;
    while (num) {
        num = num&(num-1);
        res++;
    }
    return res;
}

int main() {
    return 0;
}
