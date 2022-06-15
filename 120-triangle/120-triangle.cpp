class Solution {
   
public:
     int min_sum(vector<vector<int>>&triangle, int i, int j, vector<vector<int>>&dp)
    {
        if(i == triangle.size()-1){
            dp[i][j] = triangle[i][j];
           return triangle[i][j];
        }
        if(dp[i][j] != INT_MAX)
            return dp[i][j];
        int left = min_sum(triangle, i+1, j, dp);
        int right = min_sum(triangle, i+1, j+1, dp);
         dp[i][j] = min(left, right)+triangle[i][j];
        return dp[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size(), vector<int>(triangle.size(), INT_MAX));
       return min_sum(triangle, 0, 0, dp);
       
    }
}; 