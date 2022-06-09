class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0, j = s.length()-1;
        while(i < j-i)
        {
            if(s[i] != s[j-i])
              return 2;
            i++;
        }
        return 1;
    }
};