vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (root == nullptr) {
        return ans;
    }
    // Visit the root node
    ans.push_back(root->val);
    // Traverse the left subtree
    vector<int> leftSubtree = preorderTraversal(root->left);
    // Append the result of the left subtree traversal to the ans vector
    ans.insert(ans.end(), leftSubtree.begin(), leftSubtree.end());
    // Traverse the right subtree
    vector<int> rightSubtree = preorderTraversal(root->right);
    // Append the result of the right subtree traversal to the ans vector
    ans.insert(ans.end(), rightSubtree.begin(), rightSubtree.end());
    return ans;
}
