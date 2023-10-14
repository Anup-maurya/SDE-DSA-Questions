// 662. Maximum Width of Binary Tree
// Given the root of a binary tree, return the maximum width of the given tree.


class Solution {
     public:
       int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*, unsigned long long int>> Q;
        Q.push({root, 1}), Q.push({NULL, -1});
        unsigned long long int l=1, r=1, mx = 0;
        while(!Q.empty()){
            auto tmp = Q.front();
            Q.pop();
            TreeNode *var = tmp.first;
            unsigned long long int v = tmp.second;
            if(var==NULL ){
                if(!Q.empty()){
                    mx = max(mx, (r-l + 1));
                    l = Q.front().second;
                    Q.push({NULL,-1});
                }
                else{
                    mx = max(mx, (r-l + 1));
                    break;
                }
            }
            else{
                r = v;                
                if(var->left) Q.push({var->left,2*v});
                if(var->right) Q.push({var->right, 2*v+1});
            }
        }
    return mx;
       }
};
