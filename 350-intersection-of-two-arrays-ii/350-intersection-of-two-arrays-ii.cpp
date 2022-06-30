class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int j=0, i=0;
        map<int, int>mp;
        for(auto x : nums2)
            mp[x]++;
        for(int i=0; i<nums1.size(); i++)
        {
            if(mp[nums1[i]] > 0){
                res.push_back(nums1[i]);
                mp[nums1[i]]--;
            }
        }
        return res;
    }
};