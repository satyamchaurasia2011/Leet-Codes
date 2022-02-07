class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int>mp;
        for(auto &&a : nums)
            mp[a]++;
       for(auto &&a : nums)
           if(mp[a]==1)
               return a;
        return 0;
    }
};