#include <iostream>

using namespace std;

bool isUgly(int num) {
    // write your code here
    while(num%2 == 0) {
        num /= 2;
    }
    while(num%3 == 0) {
        num /= 3;
    }
    while(num%5 == 0) {
        num /= 5;
    }
    return num == 1;
}

int main() {
    return 0;
}
