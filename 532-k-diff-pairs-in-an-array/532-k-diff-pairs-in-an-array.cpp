class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        map<vector<int>, int>mpr;
        int count = 0;
        for(auto &&a : nums)
            mp[a]++;
        for(auto &&a : nums)
        {
            int num = a+k;
            if(mp.find(num) != mp.end())
            {
                if(num == a && mp[num]>1)
                    mpr[{a,num}]++;
                else if(num != a)
                    mpr[{a,num}]++;
            }
        }
        return mpr.size();
    }
};