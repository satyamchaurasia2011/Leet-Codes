class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>stk1;
        stack<char>stk2;
        int i=0;
        while(i < s.length())
        {
            if(s[i] != '#')
                stk1.push(s[i]);
            else if(!stk1.empty())
                stk1.pop();
            i++;
        }
        string s1 = " ";
        while(!stk1.empty())
        {
            s1 += stk1.top();
            stk1.pop();
        }
        i=0;
        while(i < t.length())
        {
            if(t[i] != '#')
                stk2.push(t[i]);
            else if(!stk2.empty())
                stk2.pop();
            i++;
        }
        string s2 = " ";
        while(!stk2.empty())
        {
            s2 += stk2.top();
            stk2.pop();
        }
        return s1 == s2;
    }
};