class Solution {
    
public:
    int addDigits(int num) {
     // naive approach
        // while(num/10>0)
        // {
        //     int s = num;
        //       int sum=0;
        //     while(s>0)
        //     {
        //         sum += s%10;
        //         s /= 10;
        //     }
        //     num = sum;
        // }
        // return num;
        
        //O{1}
        if(num==0)
            return 0;
        else if(num % 9 == 0)
            return 9;
        else
            return num%9;
        
    }
};