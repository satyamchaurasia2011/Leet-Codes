class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0 || n<0) return false;
        double m = log2(n);
        int p = m;
        return m-p == 0 ;
    }
};