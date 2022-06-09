class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0, j = s.length()-1;
        while(i < j-i)
        {
            if(s[i] == s[j-i])
                i++;
            else return 2;
        }
        return 1;
    }
};