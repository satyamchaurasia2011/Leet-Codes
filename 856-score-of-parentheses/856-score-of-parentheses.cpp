class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>stk;
        for(int i=0; i < s.size(); i++){
            if(s[i] == '(')
                stk.push(-1);
            else 
            {
                if(stk.top() == -1)
                {
                    stk.pop();
                    stk.push(1);
                } 
                else {
                   int val= 0;
                    while(stk.top() != -1)
                    {
                        val += stk.top();
                        stk.pop();
                    }
                    stk.pop();
                    stk.push(2*val);
                }
                    
            }
        }
        int val = 0;
        while(!stk.empty())
        {
            val += stk.top();
            stk.pop();
        }
        return val;
       
    }
};