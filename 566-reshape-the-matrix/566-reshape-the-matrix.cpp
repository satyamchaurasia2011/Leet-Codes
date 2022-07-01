class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(r * c != m * n)
            return mat;
        vector<vector<int>>reshaped(r, vector<int>(c));
        vector<int>s;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                s.push_back(mat[i][j]);
        int k=0;
        for(int i =0; i<r; i++)
            for(int j=0; j<c; j++)
                reshaped[i][j] = s[k++];
        return reshaped;
    }
};