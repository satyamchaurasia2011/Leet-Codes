class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>symb{".-","-...","-.-.","-..",".","..-.","--.",
                         "....","..",".---","-.-",".-..","--","-.",
                         "---",".--.","--.-",".-.","...","-","..-",
                         "...-",".--","-..-","-.--","--.."};
        unordered_map<string, int>mp;
        for(int i=0; i<words.size(); i++)
        {
            string pattern = "";
            for(int j=0; j<words[i].size(); j++){
                pattern += symb[words[i][j] - 'a'];
            }
            mp[pattern] = 1;
        }
        return mp.size();
    }
};