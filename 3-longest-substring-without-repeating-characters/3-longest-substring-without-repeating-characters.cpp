class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int i=0, j=0;
      map<char, int>mp;
        int max_substr=0;
      while(j < s.length())
      {
          mp[s[j]]++;
          if(mp.size() == j-i+1)
          {
              if(max_substr < j-i+1)
                  max_substr = j-i+1;
          }
          else{
              while(mp.size() < j-i+1){
                  mp[s[i]]--;
                    if(mp[s[i]] == 0)
                  mp.erase(s[i]);
              i++;
              }
          }
          j++;
      }
        return max_substr;
        
    }
};