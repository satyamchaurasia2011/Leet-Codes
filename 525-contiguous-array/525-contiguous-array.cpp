class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int>mp;
        int max_sub=0;
        int sum=0;
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i] ? 1 : -1;
            if(sum == 0)
                max_sub = max(max_sub, i+1);
            else if(mp.find(sum) != mp.end())
                max_sub = max(max_sub, i - mp[sum]);
            else
                mp[sum] = i;
        }
        return max_sub;
            
        
        
    }
};