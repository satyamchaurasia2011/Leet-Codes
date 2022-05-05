class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start = 0;
        int end = -1;
        int max = nums[0];
        int min = nums[nums.size()-1];
        for(int i = 1; i<nums.size(); i++)
        {
            if(max <= nums[i])
                max = nums[i];
            else
                end = i;
        }
        for(int i = nums.size()-2; i>=0; i--)
        {
            if(min >= nums[i])
                min = nums[i];
            else 
                start = i;
        }
        return end - start + 1;
    }
};