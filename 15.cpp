#include <iostream>
#include <vector>

using namespace std;

void recur(vector<vector<int> > &vvi, vector<int> nums, int idx) {
    if (idx == nums.size()) {
        vvi.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++) {
        swap(nums[i], nums[idx]);
        recur(vvi, nums, idx+1);
        swap(nums[i], nums[idx]);
    }
}

vector<vector<int> > permute(vector<int> nums) {
    // write your code here
    vector<vector<int> > vvi;
    recur(vvi, nums, 0);
    return vvi;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    return 0;
}
