#include <iostream>

using namespace std;

int addDigit(int num) {
    int res = 0;
    while (num) {
        res += num%10;
        num /= 10;
    }
    return res;
}

int addDigits(int num) {
    // Write your code here
    int res = num;
    do {
        res = addDigit(res);
    } while (res >= 10);
    return res;
}



int main() {
    return 0;
}
