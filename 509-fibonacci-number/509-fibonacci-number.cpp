class Solution {
public:
    int fib(int n) {
        if(n == 0)
            return 0;
       int fterm = 0, sterm = 1,sum;
        for(int i=2; i<=n; i++){
            sum = fterm + sterm;
            fterm = sterm;
            sterm = sum;
        }
        return sterm;
            
        
    }
};