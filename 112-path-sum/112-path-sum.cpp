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
    bool sumTarget(TreeNode* root, int targetSum, int sum){
        if(root == nullptr) return false;
        if(root->left==nullptr && root->right==nullptr){
            if(sum + root->val == targetSum)
                return true;
            return false;
        }
        return sumTarget(root->left, targetSum, (sum+(root->val))) || 
            sumTarget(root->right, targetSum, (sum+(root->val)));
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
       
        return sumTarget(root, targetSum, 0);
    }
};