#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int x): val(x), right(NULL), left(NULL) {}
};

bool isIdentical(TreeNode * a, TreeNode * b) {
    // write your code here
    if(!a && !b)
        return true;
    if (!a || !b)
        return false;
    return a->val == b->val && isIdentical(a->left, b->left) && isIdentical(a->right, b->right);
}

int main() {
    return 0;
}
