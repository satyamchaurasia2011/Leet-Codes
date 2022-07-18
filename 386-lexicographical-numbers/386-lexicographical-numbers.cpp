class Solution {
public:
    void dfs(vector<int>&lex, int n, int i){
        if(i > n)
            return;
        lex.push_back(i);
        for(int j=0; j<10; j++)
            dfs(lex, n, i*10+j);
    }
    
    vector<int> lexicalOrder(int n) {
        vector<int>lex;
       for(int i=1; i<10; i++)
           dfs(lex, n, i);
        return lex;
    }
};