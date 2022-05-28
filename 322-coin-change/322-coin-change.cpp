class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
         vector<int>dp(amount+1, 0);
        dp[0] = 0;
        if(amount == 0)
            return 0;
        for(int i=0; i<coins.size(); i++)
        {
            for(int a = 1; a<=amount; a++)
            {
                if(coins[i] <= a){
                    if(dp[a-coins[i]] == 0 && a != coins[i])
                        continue;
                    int temp = dp[a - coins[i]]+1;
                    if(dp[a] != 0)
                        dp[a] = min(dp[a], temp);
                    else
                        dp[a] = temp;
                }
            }
        }
        return dp[amount] == 0 ? -1 : dp[amount];
    }
};