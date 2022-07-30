class Solution {
public:
    bool isUniversal(vector<int>a, vector<int>b){
        for(int i=0; i<26; i++)
            if(a[i] < b[i])
                return false;
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>mp(26, 0);
        vector<string>ans;
        for(int i=0; i<words2.size(); i++){
            vector<int>tmp(26,0);
            for(int j=0; j<words2[i].size(); j++)
                tmp[words2[i][j] - 'a']++;
            for(int i=0; i<26; i++)
                mp[i] = max(mp[i], tmp[i]);
        }
        for(int i=0; i<words1.size(); i++)
        {
            vector<int>mp1(26, 0);
            for(int j=0; j<words1[i].size(); j++){
                if(mp[words1[i][j] - 'a'] > 0)
                    mp1[words1[i][j] - 'a']++;
            }
            if(isUniversal(mp1, mp))
                ans.push_back(words1[i]);                
        }
        return ans;
    }
};