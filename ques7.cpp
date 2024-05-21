 vector<int> inorderTraversal(TreeNode* root){
           vector<int>ans;
       
           if(root == NULL){

            return ans;
           }
          vector<int>l = inorderTraversal(root->left);
          ans.insert(ans.end() , l.begin() , l.end());
          ans.push_back(root->val); 
          vector<int>r = inorderTraversal(root->right);
          ans.insert(ans.end() , r.begin() , r.end());
          return ans;
    }
