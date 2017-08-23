#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> plusOne(vector<int> digits) {
    // write your code here
    vector<int> v;
    int c = 1;
    for (int i = digits.size()-1; i >= 0; i--) {
        c += digits[i];
        v.push_back(c%10);
        c /= 10;
    }
    if (c > 0)
        v.push_back(c);
    reverse(v.begin(), v.end());
    return v;
}

int main() {
    vector<int> v;
    v.push_back(0);
    vector<int> vv = plusOne(v);
    for (int i = 0; i < vv.size(); i++)
        cout << vv[i] << " ";
    cout << endl;
    return 0;
}
