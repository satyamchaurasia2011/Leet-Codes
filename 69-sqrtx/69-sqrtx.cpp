class Solution {
public:
    int mySqrt(long long x) {
     long long i=0;
        while(i*i <= x){
            i++;
        }
        return i-1;
    }
};