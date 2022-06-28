class Solution {
public:
   
    int minDeletions(string s) {
      vector<int>freq(26, 0);
     for(char c : s)
         freq[c - 'a']++;
     sort(freq.begin(), freq.end(), greater<int>());
     
     int max_size = s.size();
     int count = 0;
     for(int i = 0; i < 26 && freq[i] > 0; i++)
     {
         if(freq[i] > max_size){
             count += freq[i] - max_size;
             freq[i] = max_size;
         }
         
             max_size = max(0, freq[i]-1);
     }
        return count;
	
    }
};