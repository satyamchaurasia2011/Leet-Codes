class Solution {
public:
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
            int f = 0;
            for(int i=0; i<26; i++){
                if(mp1[i] < mp[i]){
                    f= 1;
                    break;
                }
            }
            if(f == 0)
                ans.push_back(words1[i]);
                
                    
        }
        return ans;
    }
};