#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums) {
    // write your code here
    int idx = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0) {
            if (nums[i] == nums[i-1])
                continue;
        }
        nums[idx++] = nums[i];
    }
    nums.resize(idx);
    return idx;
}

int main() {
    return 0;
}
