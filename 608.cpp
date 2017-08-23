#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    // write your code here
    vector<int> res;
    int i = 0, j = nums.size()-1;
    while (i < j) {
        if (nums[i] + nums[j] > target) {
            j--;
        } else if (nums[i] + nums[j] < target) {
            i++;
        } else {
            res.push_back(i);
            res.push_back(j);
            return res;
        }
    }
}

int main() {
    return 0;
}
