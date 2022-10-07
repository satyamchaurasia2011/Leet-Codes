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
    TreeNode *prev = nullptr;
    // void flatten(TreeNode* root) {
    //     if(root == nullptr)
    //          return;
    //     flatten(root->right);
    //     flatten(root->left);
    //     root->right = prev;
    //     root->left = nullptr;
    //     prev = root;
    // }
    void flatten(TreeNode* root) {
      stack<TreeNode*>stk;
        if(root) stk.push(root);
        while(!stk.empty())
        {
            TreeNode* p = stk.top();
            stk.pop();
            if(p->right)
                stk.push(p->right);
            if(p->left)
                stk.push(p->left);
            if(!stk.empty()){
                p->right = stk.top();
                p->left = nullptr;
            }
        }
    }
};