class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>stk;
        int p = 0;
        string res = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                res += s[i];
                p++;
            }
               
            else if(s[i] == ')')
            {
                if(p != 0){
                    res += s[i];
                    p--;
                }      
            }
            else
                res += s[i];
        }
      if(p != 0){
          p=0;
          string fin = "";
          for(int i=res.size()-1; i>=0; i--){
                if(res[i] == ')'){
                fin += res[i];
                p++;
            }
               
            else if(res[i] == '(')
            {
                if(p != 0){
                    fin += res[i];
                    p--;
                }      
            }
            else
                fin += res[i];
        }
          reverse(fin.begin(), fin.end());
          return fin;
      }
        return res;
        
    }
};