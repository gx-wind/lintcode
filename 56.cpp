#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> numbers, int target) {
    // write your code here
    vector<pair<int, int> > vp;
    for (int i = 0; i < numbers.size(); i++) {
        vp.push_back(make_pair(numbers[i], i+1));
    }
    sort(vp.begin(), vp.end());
    vector<int> res;
    int i = 0, j = numbers.size()-1;
    while (i < j) {
        if(vp[i].first+vp[j].first < target) {
            i++;
        } else if (vp[i].first+vp[j].first > target) {
            j--;
        } else {
            res.push_back(vp[i].second);
            res.push_back(vp[j].second);
            break;
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    return 0;
}
