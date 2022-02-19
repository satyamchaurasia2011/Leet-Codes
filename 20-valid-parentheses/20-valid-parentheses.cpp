class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        int i=0;
        for(auto c : s){
            if(!stk.empty() && c == ')' && stk.top()=='('){
                stk.pop();
                i++;
            }
            else if(!stk.empty() && c == ']' && stk.top()=='['){
                stk.pop();
                i++;
            }
            else if(!stk.empty() && c == '}' && stk.top()=='{'){
                stk.pop();
                i++;
            }
            else
              stk.push(c);
        }
        return (i == s.size()/2 && stk.empty());
        
    }
};