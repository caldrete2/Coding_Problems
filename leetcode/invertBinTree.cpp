class Solution {
public:
    
    void swapNode(TreeNode* cur) {
        TreeNode* temp = nullptr;
        
        temp = cur->left;
        cur->left = cur->right;
        cur->right = temp;
        
        if(cur->left) swapNode(cur->left);
        if(cur->right) swapNode(cur->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return root;
         
        swapNode(root);
        
        return root;
    }
};
