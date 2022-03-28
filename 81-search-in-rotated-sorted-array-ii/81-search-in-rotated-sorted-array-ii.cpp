class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        int mid;
        while(l < h){
          mid = (l + h) / 2;
          if(nums[mid] == target) 
              return true;
          if(nums[mid] > nums[h]){
              if(nums[mid] > target && nums[l] <= target)
                  h = mid;
              else 
                  l = mid + 1;
          }else if(nums[mid] < nums[h]){
              if(nums[mid]<target && nums[h] >= target) 
                  l = mid + 1;
              else h = mid;
          }else{
              h--;
          }
          
    }
        return nums[l] == target;
    }
};