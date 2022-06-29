class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int>res;
        for(auto z : nums)
            mp[z]++;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[target - nums[i]] > 0 && target-nums[i] != nums[i])
                res.push_back(i);
            else if(target-nums[i] == nums[i] && mp[target - nums[i]]>1)
                res.push_back(i);
        }
        return res;
    }
};