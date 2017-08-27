#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> strs) {
    // write your code here
    string pre = "";
    int idx = 0;
    while (strs.size() > 0) {
        for (int i = 0; i < strs.size(); i++) {
            if (idx >= strs[i].size() || (i > 0 && strs[i][idx] != strs[i-1][idx]))
                return pre;
        }
        pre += strs[0][idx];
        idx++;
    }
}

int main() {
    return 0;
}
