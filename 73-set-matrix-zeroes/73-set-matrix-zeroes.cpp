class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        map<int, int>mpr;
        map<int, int>mpc;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j] == 0){
                  mpr[i] = 1;
                  mpc[j] = 1;
                }
            }
        }
        for(int i=0; i<m; i++)
            if(mpr[i] == 1){
                for(int j=0; j<n; j++)
                    matrix[i][j] = 0;
            }
        for(int i=0; i<n; i++)
            if(mpc[i] == 1){
                for(int j=0; j<m; j++)
                    matrix[j][i] = 0;
            }
    }
};