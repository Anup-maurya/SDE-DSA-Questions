// 94. Binary Tree Inorder Traversal
// Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector < int > inOrder;
  stack < TreeNode * > s;
  while (true) {
    if (root != NULL) {
      s.push(root);
      root = root -> left;
    } else {
      if (s.empty()) break;
      root = s.top();
      inOrder.push_back(root -> val);
      s.pop();
      root = root -> right;
    }
  }
  return inOrder;

    }
};
