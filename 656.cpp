#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string multiply(string& num1, string& num2) {
    // Write your code here
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    vector<int> v(num1.size()+num2.size(), 0);
    for (int i = 0; i < num1.size(); i++) {
        for (int j = 0; j < num2.size(); j++) {
            v[i+j] += (num1[i]-'0')*(num2[j]-'0');
        }
    }
    int c = 0, i;
    for (i = 0; i < num1.size()+num2.size(); i++) {
        v[i] += c;
        c = v[i]/10;
        v[i] %= 10;
    }
    i = num1.size()+num2.size()-1;
    while (i >= 0 && v[i] == 0) {
        i--;
    }
    if (i == -1)
        return "0";
    string res;
    while (i >= 0) {
        res += '0'+v[i];
        i--;
    }
    return res;
}

int main() {
    string s1 = "0";
    string s2 = "0";
    cout << multiply(s1, s2) << endl;
    return 0;
}
