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
    void inorder(TreeNode* root, map<int, int>&mp){
        if(root == nullptr) return;
        mp[root->val]++;
        inorder(root->left, mp);
        inorder(root->right, mp);
    }
    bool target(TreeNode* root, int k, map<int, int>&mp){
        if(root == nullptr) return false;
        if(root->val == (k - root->val)){
            if(mp[k-root->val] > 1)
                return true;
        }
        else if(mp[k - root->val] > 0)
            return true;
        return target(root->left, k, mp) ||  target(root->right, k, mp);
    }
    bool findTarget(TreeNode* root, int k) {
        map<int, int>mp;
        inorder(root, mp);
        return target(root, k, mp);
    }
};