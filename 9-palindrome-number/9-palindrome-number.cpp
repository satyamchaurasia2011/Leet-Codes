class Solution {
public:
    bool isPalindrome(int x) {
        long long p=0;
        long long i = x;
        while(i>0)
        {
            p = 10*p +  i%10;
            i /= 10;
        }
        return x == p ? true : false;
    }
};