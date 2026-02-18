
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Recursive Postorder
void postorderRec(TreeNode* root, vector<int>& result) {
    if (!root) return;
    postorderRec(root->left, result);
    postorderRec(root->right, result);
    result.push_back(root->val);
}

// Iterative Postorder using two stacks
vector<int> postorderIter(TreeNode* root) {
    vector<int> result;
    if (!root) return result;

    stack<TreeNode*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        TreeNode* node = st1.top();
        st1.pop();
        st2.push(node);

        if (node->left) st1.push(node->left);
        if (node->right) st1.push(node->right);
    }

    while (!st2.empty()) {
        result.push_back(st2.top()->val);
        st2.pop();
    }
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

    vector<int> recRes;
    postorderRec(root, recRes);

    auto iterRes = postorderIter(root);

    cout << "Recursive: ";
    for (int x : recRes) cout << x << " ";
    cout << endl;

    cout << "Iterative: ";
    for (int x : iterRes) cout << x << " ";
    cout << endl;

    return 0;
}
