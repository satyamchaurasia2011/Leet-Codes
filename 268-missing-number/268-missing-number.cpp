class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         int n = nums.size()
//         int s = 0;
//         int sum = (n*(n+1))/2;
//         for(int i=0; i<nums.size(); i++)
//             s += nums[i];
//         if(sum != s)
//             return sum - s;
//         else{
//             for(int i=0; i<nums.size(); i++)
//             if(nums[i] == 0)
//                 return n+1;
//         }
        
//         return 0;
        
        //XOR
        int res = nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            res ^= nums[i];
            res ^= i;
        }
        return res;
    }
};