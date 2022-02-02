class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length()) return {};
        vector<int>vecp(26, 0);
        vector<int>vecs(26,0);
        vector<int>anag;
        for(int i=0; i<p.length(); i++)
            vecp[p[i] - 'a']++;
    //first window
        for(int i=0; i<p.length(); i++)
        {
            vecs[s[i] - 'a']++;
        }
        if(vecs == vecp) anag.push_back(0);
        
        for(int i=p.length(); i<s.length(); i++)
        {
            vecs[s[i - p.length()] - 'a']--;
            vecs[s[i] - 'a']++;
            if(vecs == vecp) 
                anag.push_back(i-p.length()+1);
        }
        return anag;
          
    }
    
};