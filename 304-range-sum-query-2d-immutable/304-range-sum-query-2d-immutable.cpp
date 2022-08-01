class NumMatrix {
public:
     vector<vector<int>>newMatrix;
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        newMatrix.resize(row+1, vector<int>(col+1, 0));
        for(int i=0; i<row; i++){
            int prefix = 0;
            for(int j = 0; j<col; j++){
                prefix += matrix[i][j];
                newMatrix[i+1][j+1] = newMatrix[i][j+1] + prefix;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1 += 1;
        col1 += 1;
        row2 += 1;
        col2 += 1;
        int top = newMatrix[row1-1][col2];
        int left = newMatrix[row2][col1-1];
        int topLeft = newMatrix[row1-1][col1-1];
       return newMatrix[row2][col2] - top - left + topLeft ;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */