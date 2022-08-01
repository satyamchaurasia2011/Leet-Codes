class NumArray {
public:
    vector<int>newNums;
    NumArray(vector<int>& nums) {
        newNums.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
            newNums.push_back(newNums[i-1]+nums[i]);
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return newNums[right];
        return newNums[right] - newNums[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */