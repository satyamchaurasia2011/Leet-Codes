class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int min_diff = INT_MAX;
        int ind = 0;
        long long sum = 0;
        for(int i=0; i<nums.size(); i++)
            sum += nums[i];
        long long left = 0, right = sum;
        int avg_diff;
        for(int i=0; i<nums.size(); i++)
        {
            left += nums[i];
            right -= nums[i];
            if(nums.size()-i-1 <= 0)
                 avg_diff = left/(i+1);
            else
                 avg_diff = (left/(i+1)) - (right/(nums.size()-i-1));
            if(abs(avg_diff) < min_diff)
            {
                min_diff = abs(avg_diff);
                ind = i;
            }
        }
        return ind;
    }
};