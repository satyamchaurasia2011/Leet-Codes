class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(r * c != m * n)
            return mat;
        vector<vector<int>>reshaped(r, vector<int>(c));
       int resr = 0, resc = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
            {
                if(resc == c){
                    resr++;
                    resc = 0;
                }
                reshaped[resr][resc] = mat[i][j];
                resc++;
            }
        }
            
       
        return reshaped;
    }
};