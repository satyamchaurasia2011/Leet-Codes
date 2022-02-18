class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>stk;
        int n = num.size();
        string res = "";
        for(int i=0; i<n; i++)
        {
            while(!stk.empty() && stk.top() > num[i] && k>0){
                stk.pop();
                k--;
            }
            if(!stk.empty() || num[i] != '0')
                stk.push(num[i]);
        }
        while(!stk.empty() && k--)
            stk.pop();
        if(stk.empty())
            return "0";
        
        while(!stk.empty()){
            num[n-1] = stk.top();
            stk.pop();
            n -= 1;
        }
       
        return num.substr(n);
    }
};