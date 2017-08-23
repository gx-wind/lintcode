#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

int maxDepth(TreeNode *root) {
    // write your code here
    if (!root)
        return 0;
    return max(maxDepth(root->left), maxDepth(root->right))+1;
}

int main() {
    return 0;
}
