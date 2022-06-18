class Solution {
    int climb(int n, vector<int> &dp)
    {
         if(n == 0)
            return 1;
        else if(n < 0)
            return 0;
        if(dp[n] != -1)
            return dp[n];
        int l = climb(n-1, dp);
        int r = climb(n-2, dp);
        dp[n] = l+r;
        return dp[n];
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1, -1);
        return climb(n, dp);
    }
};