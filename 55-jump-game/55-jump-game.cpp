class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        int curr_path = 0;
         if(nums.size() == 1)
            return true;
        if(nums[0] == 0)
            return false;
        int i;
        for(i=0; i<nums.size(); i++)
        {
            farthest = max(farthest, nums[i]+i);
            if(curr_path == i){
                if(curr_path != nums.size()-1){
                    curr_path = farthest;
                }
                else break;
            }
        }
        if(curr_path < i)
            return false;
        return true;
    }
};