#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

void invertBinaryTree(TreeNode *root) {
    // write your code here
    if (!root)
        return;
    TreeNode *tmp;
    tmp = root->right;
    root->right = root->left;
    root->left = tmp;
    invertBinaryTree(root->right);
    invertBinaryTree(root->left);
}

int main() {
    return 0;
}
