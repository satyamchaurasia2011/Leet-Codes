class Solution {
public:
    int search(vector<int>& nums, int target) {
            int i=0, j = nums.size()-1;
            while(i <= j){
                int mid = (i+j)/2;
                if(nums[mid] == target)
                    return mid;
                //if left is sorted
                 if(nums[i] <= nums[mid])
                {
                    if(target <= nums[mid] && target >= nums[i]  )
                        j = mid-1;
                    else
                        i = mid+1;
                }
                //if right is sorted
                else{
                     if(target >= nums[mid] && target <= nums[j])
                        i = mid+1;
                    else
                        j = mid-1;
                }
               
            }
        return -1;
        

    }
};