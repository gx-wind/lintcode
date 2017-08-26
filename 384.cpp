#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {
    // write your code here
    unordered_map<char, int> m;
    int res = 0, pre = 0, i;
    for (i = 0; i < s.size(); i++) {
        if (m.find(s[i]) == m.end()) {
            m[s[i]] = i;
        } else {
            if (m[s[i]] >= pre) {
                res = max(res, i-pre);
                pre = m[s[i]]+1;
            }
            m[s[i]] = i;
        }
    }
    res = max(i-pre, res);
    return res;
}

int main() {
    string s = "gehmbfqmozbpripibusbezagafqtypz";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
