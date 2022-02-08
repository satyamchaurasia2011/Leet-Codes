class Solution {
    
public:
    int addDigits(int num) {
      
        while(num/10>0)
        {
            int s = num;
              int sum=0;
            while(s>0)
            {
                sum += s%10;
                s /= 10;
            }
            num = sum;
        }
        return num;
        
    }
};