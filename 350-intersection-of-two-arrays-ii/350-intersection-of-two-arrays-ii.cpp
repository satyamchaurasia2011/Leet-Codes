class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i = 0, j = 0;
        vector<int> res;     //we willl store result of intersection in this array
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                res.push_back(nums1[i]);    //Stores the result
                i++;
				j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;      //Moves Pointer for searching matched element
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
        }
        return res;
    }
};