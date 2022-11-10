class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        string ans = "";
        int i=0;
        while(i < s.size())
        {
            if(!stk.empty() && stk.top() == s[i])
                stk.pop();
            else
                stk.push(s[i]);
            i++;
        }
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }
       reverse(ans.begin(), ans.end()); 
        return ans;
    }
};