class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
       int val = n;
        while(val > 1){
            if(val%4 != 0) return false;
            val = val/4;
        }
        if(val == 1) return true;
        return false;
    }
};