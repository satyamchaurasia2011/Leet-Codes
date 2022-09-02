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

    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>que;
        vector<double>ans;
        que.push(root);
        while(!que.empty()){
            int s = que.size();
            double avg = 0;
            int i=s;
            while(i--){
                TreeNode* p = que.front();
                avg = avg + p->val;
                if(p->left) que.push(p->left);
                if(p->right) que.push(p->right);
                que.pop();
            }
            avg = (double)(avg/s);
            ans.push_back(avg);
        }
        return ans;
    }
};