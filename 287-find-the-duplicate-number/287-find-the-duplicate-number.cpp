class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>mp;
        int rep;
        for(auto &&a : nums)
            mp[a]++;
        for(auto &&a : nums)
            if(mp[a] > 1){
                  rep = a;
                  break;
            }
        return rep;
              
    }
};