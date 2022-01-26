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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>vec1;
        vector<int>vec2;
        inorder(root1, vec1);
        inorder(root2, vec2);
        vector<int>vec3;
        int i=0,j=0;
        while(i<vec1.size() && j<vec2.size())
        {
            if(vec1[i]<vec2[j])
                vec3.push_back(vec1[i++]);
            else
                vec3.push_back(vec2[j++]);
        }
        for( ;i<vec1.size(); i++)
            vec3.push_back(vec1[i]);
        for( ;j<vec2.size(); j++)
            vec3.push_back(vec2[j]);
        return vec3;
    }
    void inorder(TreeNode* root, vector<int>&vec)
    {
        if(root == nullptr)
            return;
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
};