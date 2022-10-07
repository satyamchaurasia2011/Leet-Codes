class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxInd = 0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[maxInd] < arr[i])
                maxInd = i;
        }
        return maxInd;
    }
};