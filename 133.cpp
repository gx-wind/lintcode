#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> longestWords(vector<string> &dictionary) {
    // write your code here
    vector<string> res;
    int maxLen = 0;
    for (int i = 0;i < dictionary.size(); i++) {
        if (dictionary[i].size() > maxLen)
            maxLen = dictionary[i].size();
    }
    for (int i = 0; i < dictionary.size(); i++) {
        if (dictionary[i].size() == maxLen)
            res.push_back(dictionary[i]);
    }
    return res;
}

int main() {
    return 0;
}
