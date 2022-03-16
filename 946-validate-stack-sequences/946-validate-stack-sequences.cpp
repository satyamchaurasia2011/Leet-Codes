class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>stk;
        int i=0,j=0;
        stk.push(pushed[i++]);
        while(!stk.empty() || i<pushed.size()){
            if(!stk.empty() && popped[j] == stk.top()){
                stk.pop();
                j++;
            }
            else if(i<pushed.size())
                stk.push(pushed[i++]);
            else if(!stk.empty() && popped[j] != stk.top())
                break;
                
        }
        return stk.empty();
    }
};