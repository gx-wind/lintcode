#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int x): val(x), right(NULL), left(NULL){}
};

void depSearch(TreeNode *root, vector<string> &vs, string s) {
    if (!root)
        return;
    if (root->left == NULL && root->right == NULL) {
        s += "->"+ to_string(root->val);
        if (s.size() > 2) {
            s = s.substr(2, s.size());
        }
        vs.push_back(s);
        return;
    }
    if (root->left == NULL) {
        s += "->"+ to_string(root->val);
        depSearch(root->right, vs, s);
    }
    else if (root->right == NULL) {
        s += "->"+ to_string(root->val);
        depSearch(root->left, vs, s);
    } else{
        s += "->"+ to_string(root->val);
        depSearch(root->left, vs, s);
        depSearch(root->right, vs, s);
    }
}

vector<string> binaryTreePaths(TreeNode* root) {
    // Write your code here
    vector<string> vs;
    if (!root)
        return vs;
    string s;
    depSearch(root, vs, s);
    return vs;
}

int main() {
    return 0;
}
