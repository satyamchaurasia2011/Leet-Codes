class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN, sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum = max(nums[i], nums[i]+sum);
            max_sum = max(sum, max_sum);
        }
        return max_sum;
    }
};