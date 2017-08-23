#include <iostream>

using namespace std;

bool isPalindrome(int num) {
    // write your code here
    long long begin = num;
    long long res = 0;
    while (num) {
        res = res*10 + num%10;
        num /= 10;
    }
    if (begin == res)
        return true;
    return false;
}

int main() {
    for (int i = 1; i < 1000; i++)
        isPalindrome(i);
    return 0;
}
