class Solution {
public:
    bool isPossible(vector<vector<int>>board, int row, int col){
        for(int i=row-1, j=col; i>=0; i--)
            if(board[i][j] == 1)
                return false;
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--)
            if(board[i][j] == 1)
                return false;
        for(int i=row-1, j=col+1; i>=0 && j<board.size(); i--,j++)
            if(board[i][j] == 1)
                return false;
        return true;
    }
    void nQueens(vector<vector<int>>board, int row, int &way){
        if(row == board.size()){
            way += 1;
            return;
        }
        for(int col = 0; col<board.size(); col++){
            if(isPossible(board, row, col)){
                board[row][col] = 1;
                nQueens(board, row+1, way);
                board[row][col] = 0;
            }
        }
        
    }
    int totalNQueens(int n) {
        vector<vector<int>>board(n, vector<int>(n,0));
        int way = 0;
        nQueens(board, 0, way);
        return way;
    }
};