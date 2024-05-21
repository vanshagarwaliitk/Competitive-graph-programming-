    int maxDepth(TreeNode* root) {
         
            if(root == NULL){
                return 0 ;
            }   
            int l =maxDepth(root->left);
            int r =maxDepth(root->right);
            return max(l,r) + 1;
    }
    int max(int a , int b){
        if(a>b) return a;
        return b;
    }
