#include <iostream>
#include <string>
#include <map>

using namespace std;

int firstUniqChar(string& s) {
    // Write your code here
    int len = s.size();
    map<char, int> m;
    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (m[s[i]] == 1)
            return i;
    }
    return -1;
}

int main() {
    string s1 = "lovelintcode";
    cout << firstUniqChar(s1) << endl;
    return 0;
}
