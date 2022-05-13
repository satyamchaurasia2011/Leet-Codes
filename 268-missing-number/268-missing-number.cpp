class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums[0];
        int s = 0;
        for(int i=1; i<nums.size(); i++)
            n = max(n, nums[i]);
        int sum = (n*(n+1))/2;
        for(int i=0; i<nums.size(); i++)
            s += nums[i];
        if(sum != s)
            return sum - s;
        else{
            for(int i=0; i<nums.size(); i++)
            if(nums[i] == 0)
                return n+1;
        }
        
        return 0;
    }
};