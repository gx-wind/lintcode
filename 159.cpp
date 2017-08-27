#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> &nums) {
    // write your code here
    int b = 0, e = nums.size()-1;
    while (b < e) {
        if (nums[b] <= nums[e])
            return nums[b];
        int m = (b+e)/2;
        if (nums[m] >= nums[b]) {
            b = m+1;
        } else {
            e = m;
        }
    }
    return nums[b];
}

int main() {
    return 0;
}
