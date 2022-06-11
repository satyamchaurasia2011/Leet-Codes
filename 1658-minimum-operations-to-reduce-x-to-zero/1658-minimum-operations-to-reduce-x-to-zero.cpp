class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
           sum += nums[i];
        int target = sum - x;
        if(target == 0) return nums.size();
        else if(target < 0)  return -1;
        
        int i=0, j=0, max_s = -1;
        sum = 0;
        while(j < nums.size())
        {
            sum += nums[j];
            if(sum == target)
                max_s = max(max_s, j-i+1);
            else if(sum > target)
            {
                while(sum > target)
                    sum -= nums[i++];
                if(sum == target)
                      max_s = max(max_s, j-i+1);
            }
            j++;
        }
        return max_s > 0 ? nums.size()-max_s : -1;
    }
};