class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>mp(26, 0);
        for(int i=0; i<sentence.size(); i++)
            mp[sentence[i] - 'a']++;
        for(int i=0; i<26; i++)
            if(mp[i] == 0)
                return false;
        return true;
    }
};