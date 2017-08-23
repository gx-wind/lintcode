#include <iostream>
#include <vector>

using namespace std;

int findMissing(vector<int> &nums) {
    // write your code here
    int sum = 0;
    int s = nums.size();
    for (int i = 0; i < nums.size(); i++)
        sum += nums[i];
    return (1+s)*s/2-sum;
}

int main() {
    return 0;
}
