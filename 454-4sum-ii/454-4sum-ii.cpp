class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
        unordered_map<int, int>sum4;
        for(auto &&a : nums1)
            for(auto &&b : nums2)
                sum4[a+b]++;
        for(auto &&c : nums3)
            for(auto &&d : nums4)
                count += sum4[-(c+d)];
        return count;
    }
};