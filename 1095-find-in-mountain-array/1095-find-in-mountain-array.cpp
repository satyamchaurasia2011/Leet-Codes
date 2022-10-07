/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int BinarySearch(int target, int i, int j, MountainArray &mountainArr)
    {
       bool isAsc = mountainArr.get(i) < mountainArr.get(j);
        while(i <= j)
        {
            int mid = i + (j-i)/2;
            if(mountainArr.get(mid) == target)
                return mid;
            if(isAsc){
                if(target < mountainArr.get(mid))
                    j = mid-1;
                else
                    i = mid+1;
            }else{
                if(target < mountainArr.get(mid))
                    i = mid+1;
                else
                    j = mid-1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int i = 0;
        int j = mountainArr.length()-1;
        while(i < j)
        {
            int mid = i + (j-i)/2;
            if(mountainArr.get(mid) > mountainArr.get(mid+1))
                j = mid;
            else
                i = mid+1;
        }
        int size = mountainArr.length()-1;
        int ans = BinarySearch(target, 0, i, mountainArr);
        if(ans == -1)
            return BinarySearch(target, i+1, size, mountainArr);
        return ans;
    }
};