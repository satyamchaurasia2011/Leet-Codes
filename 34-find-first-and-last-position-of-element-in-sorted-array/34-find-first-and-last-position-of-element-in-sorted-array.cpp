class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int i = 0;
        // int j = nums.size()-1;
        // int idx = -1;
        // while(i <= j){
        //     int mid = i + (j-i)/2;
        //     if(nums[mid] == target){
        //         idx = mid;
        //         break;
        //     }
        //     else if(nums[mid] < target)
        //         i = mid+1;
        //     else
        //         j = mid-1;
        // }
        // if(idx == -1)
        //     return vector<int>{-1, -1};
        // int left = idx;
        // int right = idx;
        // while(left >= 0 && nums[left] == target)
        //     left--;
        // while(right < nums.size() && nums[right] == target)
        //     right++;
        // return vector<int>{left+1, right-1};
        
        int i=0, j=nums.size()-1;
        int start = -1, end = -1;
        while(i <= j){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                start = mid;
                j = mid-1;
            }
            else if(nums[mid] < target)
                i = mid+1;
            else
                j = mid-1;
        }
        i=0;
        j = nums.size()-1;
        while(i <= j){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                end = mid;
                i = mid+1;
            }
            else if(nums[mid] < target)
                i = mid+1;
            else
                j = mid-1;
        }
        if(start != -1 && end == -1)
            return vector<int>{start, start};
        return vector<int>{start, end};
    }
};