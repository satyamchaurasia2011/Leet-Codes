class Solution {
    vector<vector<int>>comb;
    void dfs(vector<int>& candidates, int i, int total, int target, vector<int>& temp){
        if(total == target){
            comb.push_back(temp);
            return;
        }
        else if(i >= candidates.size() || total > target)
            return;
         temp.push_back(candidates[i]);
        dfs(candidates, i, total+candidates[i], target, temp);
        
        temp.pop_back();
        dfs(candidates, i+1, total, target, temp);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        dfs(candidates, 0, 0, target, temp);
            return comb;
        
    }
};