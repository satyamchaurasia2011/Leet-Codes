class Solution {
public:
    string removeDuplicates(string s, int k) {
        if(s.length() < k)
            return s;
        stack<pair<char, int>>stk;
        string rem = "";
        for(int i=0; i<s.length(); i++)
        {
           if(stk.empty() || stk.top().first != s[i])
               stk.push({s[i], 1});
            else
            {
               auto prev = stk.top();
                stk.pop();
                stk.push({s[i], prev.second+1});
            }
             if(stk.top().second == k){
                  stk.pop();
             }
               
        }
         while(!stk.empty())
         {
             auto cur = stk.top();
             stk.pop();
             while(cur.second--)
               rem += cur.first;
           
         }
         reverse(rem.begin(), rem.end());
        return rem;
            
        }
    
};