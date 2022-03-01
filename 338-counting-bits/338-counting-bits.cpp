class Solution {
    // int count(int n, vector<int>& memo){
    //     if(n == 0)
    //         return 0;
    //     if(n == 1)
    //         return 1;
    //     if(memo[n] != 0)
    //         return memo[n];
    //     if(n%2 == 0){
    //         memo[n] = count(n/2, memo);
    //         return count(n/2, memo);
    //     }
    //     else{
    //         memo[n] = 1 + count(n/2, memo);
    //         return (1 + count(n/2, memo));
    //     }
    // }
public:
    vector<int> countBits(int n) {
        // vector<int>memo(n+1);
        // for(int i=0; i<=n; i++)
        // {
        //    memo[i] = count(i, memo);
        // }
        // return memo;
        vector<int> res(n+1);
        res[0] = 0;
        for(int i=1; i<=n; i++){
            res[i] = res[i/2] + i%2;
        }
        return res;
    }
};