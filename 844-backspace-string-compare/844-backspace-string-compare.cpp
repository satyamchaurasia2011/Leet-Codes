class Solution {
public:
    bool backspaceCompare(string s, string t) {
    //    stack<char>stk1;
    //     stack<char>stk2;
    //     int i=0;
    //     while(i < s.length())
    //     {
    //         if(s[i] != '#')
    //             stk1.push(s[i]);
    //         else if(!stk1.empty())
    //             stk1.pop();
    //         i++;
    //     }
    //     string s1 = " ";
    //     while(!stk1.empty())
    //     {
    //         s1 += stk1.top();
    //         stk1.pop();
    //     }
    //     i=0;
    //     while(i < t.length())
    //     {
    //         if(t[i] != '#')
    //             stk2.push(t[i]);
    //         else if(!stk2.empty())
    //             stk2.pop();
    //         i++;
    //     }
    //     string s2 = " ";
    //     while(!stk2.empty())
    //     {
    //         s2 += stk2.top();
    //         stk2.pop();
    //     }
    //     return s1 == s2;
    // 
    
        int k=0, p=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '#'){
                k--;
                k = max(0, k);
            }
            else{
                s[k] = s[i];
                k++;
            }
        }
        for(int i=0; i<t.length(); i++)
        {
            if(t[i] == '#'){
                p--;
                p = max(0, p);
            }
            else{
                t[p] = t[i];
                p++;
            }
        }
        if(k != p)
            return false;
        else{
            for(int i=0; i<k; i++)
                if(s[i] != t[i])
                    return false;
            return true;
        }
    
    
    }
};