#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> nums) {
    if (nums.size() == 0)
        return 0;
    int res = nums[0];
    int pre = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (pre > 0)
            pre += nums[i];
        else {
            pre = nums[i];
        }
        res = max(pre, res);
    }
    return res;
}

int main() {
    static const int arr[] = {-2,2,-3,4,-1,2,1,-5,3};
    vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    cout << maxSubArray(vec) << endl;
    return 0;
}
