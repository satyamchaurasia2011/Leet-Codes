class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans=0;
       for(int i=0; i<s.length(); i++){
            ans -= s[i];
            ans += t[i];
       }
        ans += t[s.length()];
        return ans;
    }
};