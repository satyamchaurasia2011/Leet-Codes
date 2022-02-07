class Solution {
public:
    int singleNumber(vector<int>& nums) {
       //  map<int, int>mp;
       //  for(auto &&a : nums)
       //      mp[a]++;
       // for(auto &&a : nums)
       //     if(mp[a]==1)
       //         return a;
        //or
        if(nums.size()==1) return nums[0];
        int res=0;
        for(auto &&a : nums)
            res = res^a;
        
        return res;
    }
};