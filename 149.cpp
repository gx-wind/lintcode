#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> prices) {
    // write your code here
    if (prices.size() == 0)
        return 0;
    vector<int> v;
    for (int i = 0; i < prices.size(); i++) {
        if (i == 0)
            v.push_back(0);
        else
            v.push_back(prices[i]-prices[i-1]);
    }
    int pre = prices[0], res = 0;
    for (int i = 1; i < v.size(); i++) {
        if (pre > 0) {
            pre += v[i];
        } else {
            pre = v[i];
        }
        res = max(res, pre);
    }
    return res;
}

int main() {
    return 0;
}
