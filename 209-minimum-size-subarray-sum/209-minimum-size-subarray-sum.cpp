class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0, end=0;
        int l=INT_MAX;
        int s = 0;
        s += nums[end];
        while(end < nums.size())
        {
            if(s >= target)
            {
                l = min(l, (end-start+1));
                 s -= nums[start];
                start++;   
            }
            else{
                 end++;
                if(end < nums.size()) s += nums[end]; 
                
            }
               
                
        }
        if(l == INT_MAX) return 0;
        return l;
    }
};