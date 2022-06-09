class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        vector<int>arr;
        while(i < j)
        {
            if(numbers[i] + numbers[j] == target){
                arr.push_back(i+1);
                arr.push_back(j+1);
                return arr;
            }
            else if(numbers[i] + numbers[j] < target)
                i++;
            else j--;
        }
        return arr;
    }
};