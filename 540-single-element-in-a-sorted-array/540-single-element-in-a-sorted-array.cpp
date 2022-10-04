class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i;
        for(i=0; i<nums.size()-1; i += 2)
            if(nums[i] != nums[i+1])
                return nums[i];
        if(i == nums.size()-1)
            return nums[nums.size()-1];
        return -1;
    }
};