class Solution {
public:
    bool isPowerOfTwo(long long n) {
       if(n==0) return false;
        // while(n%2==0) n/=2;
        // return n==1;
        if((n & n-1) == 0)
            return 1;
        return 0;
    }
};