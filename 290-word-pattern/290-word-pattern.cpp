class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>match;
        unordered_map<string, char>match1;
        int sr=0;
        for(int i=0; i<pattern.length(); i++)
            match[pattern[i]] = " ";
        for(int i=0; i<s.length(); i++)
        {
            sr++;
            string str = "";
            while(s[i] != ' ' && i<s.length())
              {
                  str += s[i++];
              }
            match1[str] = ' ';
        }
        if(pattern.length() != sr)
            return false;
        int k=0; int j=0;
        while(k<pattern.length())
        {
            string str = "";
            while(s[j] != ' ' && j<s.length())
              {
                  str += s[j++];
              }
            
          if(match[pattern[k]] == " " && match1[str] == ' '){
              match[pattern[k]] = str;
              match1[str] = pattern[k];
          }
            
          else if(match[pattern[k]] != str && match1[str] != pattern[k] ) 
             return false;
        k++;j++;
        }
        return true;
    }
};