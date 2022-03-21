class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int>mp;
        vector<int>res;
        for(int i=0; i<s.size(); i++)
            mp[s[i]] = i;
        int max_ind = 0;
        int prev = -1;
        for(int i=0; i<s.size(); i++)
        {
           max_ind = max(max_ind, mp[s[i]]);
           if(i == max_ind){
               res.push_back(max_ind - prev);
               prev = max_ind;
               max_ind = 0;
           }     
        }
        return res;
    }
};