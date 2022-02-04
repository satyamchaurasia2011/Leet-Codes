class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int>mp;
        int sum=0; 
        int res = 0;
        mp[0]++;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            if(mp[sum-k]>0)
                res += mp[sum-k];
            
                mp[sum]++;
        }
   
        return res;
    }
};