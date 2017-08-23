#include <iostream>
#include <vector>

using namespace std;

int uniquePaths(int m, int n) {
    // write your code here
    vector<vector<int> > vv(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        vv[i][0] = 1;
    }
    for (int j = 0; j < n; j++) {
        vv[0][j] = 1;
    }
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            vv[i][j] = vv[i-1][j]+vv[i][j-1];
        }
    }
    return vv[m-1][n-1];
}

int main() {
    return 0;
}
