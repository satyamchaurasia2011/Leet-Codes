class Solution {
public:
    char findTheDifference(string s, string t) {
        map<int, int>mp;
        map<int, int>mp1;
        char res;
        for(auto a : s)
            mp[a]++;
        for(auto b : t)
            mp1[b]++;
        for(auto b : t)
            if(mp[b] != mp1[b]){
                 res = b;
                break;
            }
         
        return res;
    }
};