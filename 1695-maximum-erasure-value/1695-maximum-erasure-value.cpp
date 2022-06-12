class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int max_sum = -1, sum=0;
        int i=0, j=0;
        map<int, int>mp;
        while(j < nums.size())
        {
            mp[nums[j]]++;
             sum += nums[j];
            if(mp.size() == j-i+1)
                max_sum = max(max_sum, sum);
            else{
                while(mp.size() < j-i+1)
                {
                    mp[nums[i]]--;
                    if(mp[nums[i]] == 0)
                        mp.erase(nums[i]);
                    sum -= nums[i];
                    i++;
                }
            }
            j++;
        }
        return max_sum;
    }
};