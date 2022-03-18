class Solution {
public:
    string removeDuplicateLetters(string s) {
         stack<char>stk;
        vector<bool>prs(26, false);
        vector<int>ind(26);
        for(int i=0; i<s.size(); i++)
            ind[s[i] - 'a'] = i;
        for(int i=0; i<s.size(); i++)
        {
            int c = s[i]-'a';
            if(prs[c]) continue;
            while(!stk.empty() && stk.top() > s[i] && i < ind[stk.top()-'a']){
                prs[stk.top()-'a'] = false;
                stk.pop();
            }
            stk.push(s[i]);
            prs[c] = true;
        }
        string res = "";
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};