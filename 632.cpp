#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

TreeNode* maxNode(TreeNode* root) {
    // Write your code here
    if(!root)
        return NULL;
    TreeNode *res = root;
    if (root->right) {
        TreeNode *r = maxNode(root->right);
        if (!r && r->val > root->val)
            res = r;
    }
    if (root->left) {
        TreeNode *l = maxNode(root->left);
        if (!l && l->val > root->val)
            res = l;
    }
    return res;
}

int main() {
    return 0;
}
