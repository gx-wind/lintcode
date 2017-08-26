#include <iostream>
#include <string>

using namespace std;

bool isValidChar(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return true;
    return false;
}

bool isPalindrome(string s) {
    // write your code here
    int i = 0, j = s.size()-1;
    while (i < j) {
        if (!isValidChar(s[i])) {
            i++;
            continue;
        }
        if (!isValidChar(s[j])) {
            j--;
            continue;
        }
        if (i < j) {
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    return 0;
}
