class Solution {
public:
    static bool comp(pair<string, int>&p1, pair<string, int>&p2){
        if(p1.second == p2.second)
            return p1.first < p2.first;
        return p1.second > p2.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
      unordered_map<string, int>mp;
      for(int i=0; i<words.size(); i++)
          mp[words[i]]++;
      vector<pair<string, int>>pr;
      for(auto it : mp){
          pr.push_back(make_pair(it.first, it.second));
      }
        sort(pr.begin(), pr.end(), comp);
        vector<string>ans;
        for(int i=0; i<k; i++)
            ans.push_back(pr[i].first);
        return ans;
    }
};