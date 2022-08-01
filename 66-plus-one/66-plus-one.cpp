class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>result = digits;
        int size = digits.size();
        if(result[size-1] < 9)
            result[size-1] += 1;
        else{
            int i = size-1;
            while(i >= 0 && result[i] == 9 ){
                result[i] = 0;
                i--;
            }
            if(i >= 0)
               result[i] += 1;
            else
                result.insert(result.begin(), 1);
        }
        return result;
            
    }
};