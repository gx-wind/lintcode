#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string &s1,const string &s2) {
    if (s1+s2 > s2+s1)
        return true;
    return false;
}

string largestNumber(vector<int> nums) {
    // write your code here
    vector<string> vs;
    for (int i = 0; i < nums.size(); i++) {
        vs.push_back(to_string(nums[i]));
    }
    sort(vs.begin(), vs.end(), cmp);
    string res;
    for (int i = 0; i < vs.size(); i++)
        res += vs[i];
    while (res.size() > 1 && res[0] == '0')
        res = res.substr(1);
    return res;
}

int main() {
    vector<int> vi;
    vi.push_back(0);
    vi.push_back(0);
    cout << largestNumber(vi) << endl;
    return 0;
}
