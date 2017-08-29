#include <iostream>
#include <cstring>

using namespace std;

int strStr(const char *source, const char *target) {
    // write your code here
    if (source == NULL || target == NULL)
        return -1;
    int m = strlen(source), n = strlen(target);
    for (int i = 0; i < m-n+1; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (source[i+j] != target[j])
                break;
        }
        if (j == n) 
            return i;
    }
    return -1;
}

int main() {
    return 0;
}
