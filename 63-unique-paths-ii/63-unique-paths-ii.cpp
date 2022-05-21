class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
       vector<vector<long long>>path(m, vector<long long>(n, 0));
        if(obstacleGrid[m-1][n-1] == 0) path[m-1][n-1] = 1;
        for(int i = m-1; i>=0; i--)
        {
            if(obstacleGrid[i][n-1] == 0 && i+1<m)
              path[i][n-1] += path[i+1][n-1];
            for(int j = n-2; j>=0; j--)
            {
                if(obstacleGrid[i][j] == 0){
                    if(i+1 < m)
                        path[i][j] += path[i+1][j];
                   
                      path[i][j] += path[i][j+1];
                }
                
                
            }
        }
        return path[0][0];
        
    }
};