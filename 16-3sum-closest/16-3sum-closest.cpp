class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = INT_MAX;
        for(int i=0; i<nums.size()-2; i++)
        {
             if(i == 0 || nums[i] != nums[i-1]){
                  int low = i+1;
                  int high = nums.size()-1;
                  while(low < high){
                      int targetDiff = target - nums[i]-nums[low]-nums[high];
                      if(targetDiff == 0)
                        return target-targetDiff;
                      if(abs(targetDiff) < abs(closest))
                          closest = targetDiff;
                      else if(targetDiff>0)
                          low++;
                     else 
                         high--;
                  }
             }
        }
                 return target - closest;
    }
};