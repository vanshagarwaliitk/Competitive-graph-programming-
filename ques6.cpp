   vector<int> postorderTraversal(TreeNode* root) {
        vector<int >ans;
        if(root == NULL){
            return ans;
        }
        vector<int>l = postorderTraversal(root->left);
        ans.insert(ans.end(),l.begin(),l.end());
        vector<int>r = postorderTraversal(root->right);
        ans.insert(ans.end(),r.begin(),r.end());
        ans.push_back(root->val);
        return ans;
    }
