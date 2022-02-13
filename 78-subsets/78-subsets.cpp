class Solution {
    void dfs(int i,vector<vector<int>>& vec, vector<int>& nums, vector<int>& arr){
        if(i>=nums.size())
        {
            vec.push_back(arr);
            return;
        }
        arr.push_back(nums[i]);
        dfs(i+1, vec, nums, arr);
        
        arr.pop_back();
        dfs(i+1, vec, nums, arr);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>arr;
        dfs(0, vec, nums, arr);
        
        return vec;
    }
};