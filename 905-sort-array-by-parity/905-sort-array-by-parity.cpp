class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
//         int i=0, j = 0;
//         while(j < nums.size())
//         {
//             if(nums[j] % 2 == 0){
//                  swap(nums[i], nums[j]);
//                 i++;
//                 j++;
//             }
//             else
//                 j++;
              
//         }
        int j=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] % 2 == 0){
             swap(nums[i], nums[j]);
             j++; 
            }
             
        }
        return nums;
    }
};