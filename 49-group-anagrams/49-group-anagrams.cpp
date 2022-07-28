class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>>bigmp;
        vector<vector<string>>ans;
        for(string str : strs){
            map<char, int>mp;
            for(int i=0; i<str.size(); i++)
                mp[str[i]]++;
           bigmp[mp].push_back(str);
        }
        for(auto it = bigmp.begin(); it != bigmp.end(); it++)
            ans.push_back(it->second);
        return ans;
    }
};