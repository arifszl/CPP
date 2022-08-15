
// Given a binary tree, determine if it is height-balanced.

// For this problem, a height-balanced binary tree is defined as:

// a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

class Solution {
public:
    int height(TreeNode*root)
    {
        if(root==NULL)
            return 0;
      
        int x=height(root->left);
        int y=height(root->right);
        
        if(x==-1 || y==-1)return -1;
        if(abs(x-y)>1) return -1;
        
        return max(x,y)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
         if(root->left==NULL && root->right==NULL)
            return true;
      int h=height(root);
        if(h==-1)return false;
        return true;
      
    }
};