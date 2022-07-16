class Solution {
public:
    int maxScore(vector<string>& words, vector<int>& farr, vector<int>& score, int idx){
        if(idx == words.size())
            return 0;
        int wadScore = maxScore(words, farr, score, idx+1);
        string word = words[idx];
        int adScore = 0;
        bool flag = true;
        for(int i=0; i<word.size(); i++)
        {
            if(farr[word[i] - 'a'] == 0)
                flag = false;
            farr[word[i] - 'a']--;
            adScore += score[word[i] - 'a'];
        }
        int fadScore = 0;
        if(flag)
            fadScore = adScore + maxScore(words, farr, score, idx+1);
        for(int i=0; i<word.size(); i++){
            farr[word[i] - 'a']++;
            adScore -= score[word[i] - 'a'];
        }
            
        return max(fadScore, wadScore);
            
    }
    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int>farr(26, 0);
        for(int i=0; i<letters.size(); i++)
            farr[letters[i] - 'a']++;
        return maxScore(words, farr, score, 0);
    }
};