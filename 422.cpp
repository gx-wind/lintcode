#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(string s) {
    // write your code here
    int len = s.size();
    int i = len-1;
    while (i >= 0 && s[i] == ' ')
        i--;
    if (i == -1)
        return 0;
    int j = i;
    while (j >= 0) {
        if (s[j] == ' ')
            break;
        j--;
    }
    return i-j;
}

int main() {
    return 0;
}
