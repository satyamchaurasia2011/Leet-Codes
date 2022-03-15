class Solution {
public:
    string simplifyPath(string path) {
        vector<string>stk;
        string curr = "";
        path += "/";
        for(char c : path)
        {
            if(c == '/'){
                if(curr == ".."){
                    if(!stk.empty()) 
                        stk.pop_back();
                }
                else if(curr != "" && curr != ".")
                    stk.push_back(curr);
                curr = "";
            } else{
                curr += c;
            }   
        }
        string res = "";
           for(string a : stk)
               res += "/" + a;
        return res.empty() ? "/" : res;
    }
};