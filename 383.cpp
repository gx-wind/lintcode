#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int> heights) {
    // write your code here
    int res = 0;
    int low = 0, high = heights.size()-1;
    while (low < high) {
        res = max(res, (high-low)*min(heights[low], heights[high]));
        if (heights[low] < heights[high]) {
            low++;
        } else {
            high--;
        }
    }
    return res;
}

int main() {
    return 0;
}
