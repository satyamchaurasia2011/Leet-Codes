class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3)
            return false;
       int start = INT_MAX;
       int mid = INT_MAX;
       for(int i=0; i<nums.size(); i++)
       {
          if(nums[i] > mid)
              return true;
           else if(nums[i] > start && nums[i] < mid) mid = nums[i];
           else if(nums[i] < start) start = nums[i];
       }
        return false;
    }
};