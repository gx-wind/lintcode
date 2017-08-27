#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<bool> >& grid, int i, int j, int m, int n) {
    if (i < 0 || j < 0 || i >= m || j >= n || !grid[i][j])
        return;
    grid[i][j] = true;
    dfs(grid, i+1, j, m, n);
    dfs(grid, i-1, j, m, n);
    dfs(grid, i, j+1, m, n);
    dfs(grid, i, j-1, m, n);
}

int numIslands(vector<vector<bool> >& grid) {
    // Write your code here
    if (grid.size() == 0)
        return 0;
    int m = grid.size();
    int n = grid[0].size();
    int res = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j]) {
                dfs(grid, i, j, m, n);
                res++;
            }
        }
    }
    return res;
}

int main() {
    return 0;
}
