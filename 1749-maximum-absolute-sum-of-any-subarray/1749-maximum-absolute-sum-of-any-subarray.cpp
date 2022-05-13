class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_so = nums[0];
        int max_fin = nums[0];
        int min_so = nums[0];
        int min_fin = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            max_so = max(nums[i], nums[i]+max_so);
            min_so = min(nums[i], nums[i]+min_so);
            
            max_fin = max(max_so, max_fin);
            min_fin = min(min_so, min_fin);
        }
        return max(abs(max_fin), abs(min_fin));
    }
};
