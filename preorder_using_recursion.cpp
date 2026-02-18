
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void preorderHelper(TreeNode* root, vector<int>& result) {
    if (!root) return;
    result.push_back(root->val);
    preorderHelper(root->left, result);
    preorderHelper(root->right, result);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    preorderHelper(root, result);
    return result;
}

int main() {
    // Example tree:
    //     1
    //    / \
    //   2   3
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    auto res = preorderTraversal(root);
    for (int x : res) cout << x << " ";
    cout << endl;
    return 0;
}
