#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBinary(string a, string b) {
    int c = 0;
    string res;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < a.size() || i < b.size(); i++) {
        if (i < a.size())
            c = c+a[i]-'0';
        if (i < b.size())
            c = c+b[i]-'0';
        res += c%2+'0';
        c /= 2;
    }
    if (c == 1)
        res += '1';
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    return 0;
}
