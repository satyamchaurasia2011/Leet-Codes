class Solution {
public:
    int findNum(vector<int>&nums, int target, int s, int e){
        if(s > e)
            return -1;
        int mid = (s+e)/2;
        if(target == nums[mid])
            return mid;
        else if(target < nums[mid])
            return findNum(nums, target, s, mid-1);
        return findNum(nums, target, mid+1, e);
    }
    int search(vector<int>& nums, int target) {
        return findNum(nums, target, 0, nums.size()-1);
    }
};