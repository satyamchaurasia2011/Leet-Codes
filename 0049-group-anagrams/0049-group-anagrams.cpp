class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>bgmap;
        vector<vector<string>>ans;
        for(string str : strs){
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            bgmap[tmp].push_back(str);
        }
        for(auto it : bgmap)
            ans.push_back(it.second);
        return ans;
    }
};