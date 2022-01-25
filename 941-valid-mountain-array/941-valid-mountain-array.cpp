class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int max = arr[0]; int ind=0;
        for(int i=1; i<arr.size(); i++)
            if(max<arr[i]){
                 max = arr[i];
                ind = i;
            }
          if(max == arr[0] || max == arr[arr.size()-1])
              return false;
        for(int i=0; i<arr.size()-1; i++)
        {
            if(arr[i] == max)
                break;
            else if(arr[i] >= arr[i+1])
                return false;     
        }
        for(int i=ind; i<arr.size()-1; i++)
        {
            if(arr[i] <= arr[i+1])
                return false;
                
        }
        return true;
            
    }
};