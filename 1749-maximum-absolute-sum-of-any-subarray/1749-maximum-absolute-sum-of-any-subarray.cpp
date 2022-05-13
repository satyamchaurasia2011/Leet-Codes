class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_so = nums[0];
        int max_fin = nums[0];
        int min_so = nums[0];
        int min_fin = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            max_so += nums[i];
            if((max_so) < (nums[i]))
                max_so = nums[i];
            if((max_so) > (max_fin))
                max_fin = max_so;
        }
         for(int i=1; i<nums.size(); i++)
        {
            min_so += nums[i];
            if((min_so) > (nums[i]))
                min_so = nums[i];
            if((min_so) < (min_fin))
                min_fin = min_so;
        }
        return max(abs(max_fin), abs(min_fin));
    }
};