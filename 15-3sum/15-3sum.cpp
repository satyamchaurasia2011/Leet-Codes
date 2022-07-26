class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>triplet;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            if(i == 0 || (i > 0 && nums[i-1] != nums[i])){
                int sum = -1*nums[i];
                int low = i+1;
                int high = nums.size()-1;
                while(low < high){
                    if(nums[low]+nums[high] == sum){
                        triplet.push_back(vector<int>{nums[i], nums[low], nums[high]});
                        low++;
                        high--;
                        while(low<high && nums[low] == nums[low-1])
                            low++;
                        while(low<high && nums[high] == nums[high+1])
                            high--;
                    }
                    else if(nums[low]+nums[high] < sum)
                        low++;
                    else
                        high--;
                }
            }
        }
        return triplet;
    }
};