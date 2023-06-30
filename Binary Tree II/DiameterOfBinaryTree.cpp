// 543. Diameter of Binary Tree
// Given the root of a binary tree, return the length of the diameter of the tree.
// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

class Solution {
    private:
    int height(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left =diameterOfBinaryTree(root->left);
        int right =diameterOfBinaryTree(root->right);
        int both= height(root->left) + height(root->right);
        return max(left,max(right,both));

    }
};
