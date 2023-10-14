// Left View of Binary Tree :GFG
// Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.

vector<int> leftView(Node *root)
{   
    vector<int> ans;  
    if (!root)
        return ans;     
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    bool ok = true;
    while (!q.empty()) {
        auto it = q.front();
        q.pop();
        if (it == NULL) {
            if (ok == false)
                ok = true;
            if (q.size() == 0)
                break;
            else
                q.push(NULL);
        }
        else {
            if (ok) {
                ans.push_back(it->data);
                ok = false;
            }
            if (it->left)
                q.push(it->left);
            if (it->right)
                q.push(it->right);             
        }
    }
 
    return ans;
}
