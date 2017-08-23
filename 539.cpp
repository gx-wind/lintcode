#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    // Write your code here
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0)
            nums[k++] = nums[i];
    }
    for (int j = k; j < nums.size(); j++) {
        nums[j] = 0;
    }
}

int main() {
    return 0;
}
