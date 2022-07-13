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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>que;
        vector<vector<int>>level;
        vector<int>nodes;
        if(root == nullptr) 
            return level;
        nodes.push_back(root->val);
        level.push_back(nodes);
        if(root->left)
            que.push(root->left);
        if(root->right)
            que.push(root->right);
        while(!que.empty()){
            nodes.clear();
            int size = que.size();
            for(int i=0; i<size; i++){
                TreeNode* p = que.front();
                que.pop();
                nodes.push_back(p->val);
                if(p->left)
                    que.push(p->left);
                if(p->right)
                    que.push(p->right);
            }
            level.push_back(nodes);
        }
        return level;
    }
};