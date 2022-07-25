class Solution {
public:
    int getPosition(vector<int>&nums, int target, bool isLeft){
         int i = 0, pos = -1;
            int j = nums.size()-1;
            while(i <= j){
                int mid = (i+j)/2;
                if(nums[mid] == target){
                    pos = mid;
                    if(isLeft) j = mid-1;
                    else i = mid+1;
                }
                else if(nums[mid] > target)
                     j = mid-1;
                else
                     i = mid+1;
            }
        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {        
    int left = getPosition(nums, target, true);
        if(left == -1) return vector<int>{-1, -1};
    int right = getPosition(nums, target, false);
        return vector<int>{left, right};
        
        
        //         int left = INT_MAX, right = -1;
//         while(true){
//             int i = 0;
//             int j = nums.size()-1;
//             int mid;
//              int isFound = false;
//             while(i <= j){
//                 mid = (i+j)/2;
//                 if(nums.size() == 0)break;
//                 if(nums[mid] == target){
//                     if(mid < left)
//                         left = mid;
//                     if(mid > right)
//                         right = mid;
//                     isFound = true;
//                     i = mid+1;
//                 }
//                 else if(nums[mid] < target)
//                     i = mid+1;
//                 else
//                     j = mid-1;
                
//             }
//             if(isFound == false || nums.size() == 0)
//                 break;
//             nums.erase(nums.begin()+mid);
//         }
//         if(left == INT_MAX) left = -1;
//         return vector<int>{left, right};
        //2nd soln
    //     int left = -1, right = -1;
    //     for(int i=0; i<nums.size(); i++)
    //     {
    //         if(nums[i] == target && left == -1)
    //            left = right = i;                
    //         else if(nums[i] == target && (i+1>=nums.size() || nums[i+1] != target))
    //             right = i;
    //     }
    //     return vector<int>{left, right};
    // }
    }
};