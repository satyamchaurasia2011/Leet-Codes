class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int i=0,j=0;
        int m = nums1.size(), n = nums2.size();
        if(m+n == 0)
            return 0;
        vector<int>nums3;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
                nums3.push_back(nums1[i++]);
            else
                nums3.push_back(nums2[j++]);
        }
        for( ; i<m; i++)
            nums3.push_back(nums1[i]);
        for(; j<n; j++)
            nums3.push_back(nums2[j]);
        int size = m+n;
      if(size%2 == 0)
          return (double)(nums3[(size/2)-1]+nums3[size/2])/2;
      return (double)nums3[size/2];
    }
};