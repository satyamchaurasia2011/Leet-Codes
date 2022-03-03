class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int>vec(nums.size());
        if(nums.size()<2)
            return 0;
        vec[0] = vec[1] = 0;
        int i=2;
        while(i < nums.size())
        {
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2])
                vec[i] = vec[i-1] + 1;
            else
                vec[i] = 0;
            i++;
        }
        int sum=0;
        for(auto a : vec)
            sum += a;
        return sum;
    }
};