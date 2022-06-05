class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
         int dp[text1.size()+1][text2.size()+1];
        for(int i=text1.size(); i>=0; i--)
        {
            for(int j=text2.size(); j>=0; j--)
            {
                if(i == text1.size() || j == text2.size())
                    dp[i][j] = 0;
                else{
                    if(text1[i] == text2[j])
                        dp[i][j] = dp[i+1][j+1]+1;
                    else{
                        dp[i][j] = max(dp[i][j+1], dp[i+1][j]);
                    }
                }
            }
        }
        return dp[0][0];
        
    }
};