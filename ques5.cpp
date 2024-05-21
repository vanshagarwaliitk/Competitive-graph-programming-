 vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (root == nullptr) {
        return ans;
    }
    ans.push_back(root->val);
    vector<int> left_tree = preorderTraversal(root->left);
    ans.insert(ans.end(), left_tree.begin(), left_tree.end());
    vector<int> rightSubtree = preorderTraversal(root->right);
    ans.insert(ans.end(),right_tree.begin(), right_tree.end());
    return ans;
}
