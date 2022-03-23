class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count = 0;
        while(startValue != target)
        {
            if(target > startValue && target % 2 == 0)
                target /= 2;
            else if(target % 2 !=0 || target < startValue)
                target += 1;
             count++;
        }
        return count;
    }
};