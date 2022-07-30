class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>freq(26, 0); int count=0;
        for(int i=0; i<sentence.size(); i++){
            if(freq[sentence[i] - 'a'] == 0)
                count++;
             freq[sentence[i] - 'a']++;
        }
       return count == 26;
    }
};