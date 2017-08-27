#include <iostream>
#include <vector>

using namespace std;

int majorityNumber(vector<int> nums) {
    // write your code here
    int c = 1, m = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (c == 0) {
            c = 1;
            m = nums[i];
        } else if (nums[i] != m) {
            c--;
        } else if (nums[i] == m) {
            c++;
        }
    }
    return m;
}

int main() {
    return 0;
}
