class Solution {
public:
    int c = 0;
    int numberOfSteps(int num) {
        c++;
        if(num == 0)
            return 0;
        if(num % 2 == 0)
            numberOfSteps(num/2);
        else 
            numberOfSteps(num-1);
        return c-1;
    }
};