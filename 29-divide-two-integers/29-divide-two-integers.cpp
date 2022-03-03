class Solution {
public:
    int divide(int a, int b) {
        long long dividend = a;
        long long divisor = b;
        if(dividend <= INT_MIN && divisor == -1){
            return INT_MAX;
        }
        int ans = 0;
        bool neg = dividend < 0 ^ divisor < 0;
        dividend = abs(dividend);
        divisor = abs(divisor);
        for(int i=31; i>=0; i--)
        {
            if((divisor << i) <= dividend){
                dividend -= divisor << i;
                ans += 1 << i;
            }
        }
        return neg ? (long long)-1*ans : ans;
    }
};