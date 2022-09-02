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
    void Nodes(TreeNode* root, int good, int &count){
        if(!root) return;
        if(root->val >= good){
            good = root->val;
            count++;
        }
        Nodes(root->left, good, count);
        Nodes(root->right, good, count);
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        Nodes(root, INT_MIN, count);
        return count;
    }
};