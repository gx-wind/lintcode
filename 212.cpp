#include <iostream>
#include <string>

using namespace std;

int replaceBlank(string &s, int len) {
    // write your code here
    int blankLen = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ')
            blankLen++;
    }
    s.resize(s.size()+2*blankLen, ' ');
    int newLen = s.size();
    int k = newLen-1;
    for (int j = len-1; j >= 0; j--) {
        if (s[j] != ' ')
            s[k--] = s[j];
        else{
            s[k] = '0';
            s[k-1] = '2';
            s[k-2] = '%';
            k -= 3;
        }
    }
    return newLen;
}

int main() {
    string s = "hello world";
    cout << replaceBlank(s, s.size()) << " " << s << endl;
    return 0;
}
