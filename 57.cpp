#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > threeSum(vector<int> numbers) {
    // write your code here
    vector<vector<int> > vvi;

    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size()-2; i++) {
        int j = i+1, k = numbers.size()-1;
        int sum = 0;
        while (j < k) {
            if (numbers[i]+numbers[j]+numbers[k] < 0)
                j++;
            else if (numbers[i]+numbers[j]+numbers[k] > 0) {
                k--;
            } else {
                vector<int> v;
                v.push_back(numbers[i]);
                v.push_back(numbers[j]);
                v.push_back(numbers[k]);
                vvi.push_back(v);
                while (numbers[j] == v[1])
                    j++;
                while (numbers[k] == v[2]) 
                    k--;
            }
        }
        while (i < numbers.size()-1 && numbers[i] == numbers[i+1])
            i++;
    }
    return vvi;
}

int main() {
    return 0;
}
