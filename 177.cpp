#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

TreeNode *recursive(vector<int> &A, int b, int e) {
    if (b > e)
        return NULL;
    int m = (b+e)/2;
    TreeNode *root = new TreeNode(A[m]);
    root->left = recursive(A, b, m-1);
    root->right= recursive(A, m+1, e);
    return root;
}

TreeNode *sortedArrayToBST(vector<int> &A) {
    // write your code here
    if (A.size() == 0)
        return NULL;
    int b = 0, e = A.size()-1;
    int m = (b+e)/2;
    TreeNode *root = new TreeNode(A[m]);
    root->left = recursive(A, b, m-1);
    root->right = recursive(A, m+1, e);
    return root;
}

int main() {
    return 0;
}
