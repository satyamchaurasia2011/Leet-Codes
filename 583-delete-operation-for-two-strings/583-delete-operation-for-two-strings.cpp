class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int dp[n+1][m+1];
        for(int i = n; i>=0; i--)
        {
            for(int j=m; j>=0; j--)
            {
                if(i == n || j == m)
                    dp[i][j] = 0;
                else{
                    if(word1[i] == word2[j])
                        dp[i][j] = dp[i+1][j+1] + 1;
                    else{
                        dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
                    }
                }
            }
        }
        int res = ( (n + m)-2*dp[0][0]);
        return res;
    }
};