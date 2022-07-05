class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int max_sub = 1, count = 1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i+1] - nums[i] == 1)
                count++;
            else if(nums[i+1] == nums[i]) continue;
            else
            {
                max_sub = max(max_sub, count);
                count = 1;
            }  
        }
        max_sub = max(max_sub, count);
        return max_sub;
    }
};