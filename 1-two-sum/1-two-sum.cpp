class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>sum2;
     
        for(int i=0; i<nums.size(); i++){
            int key = target-nums[i];
            if(sum2.find(key) != sum2.end()) return {sum2[key], i};
            sum2[nums[i]] = i;
        }
           return {};  
    }
};