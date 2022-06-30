class Solution {
public:

    bool isQueenSafe(vector<vector<int>>chess, int row, int col){
        for(int i=row-1, j = col; i>=0; i--)
            if(chess[i][j] == 1)
                return false;
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--)
            if(chess[i][j] == 1)
                return false;
        for(int i=row-1, j=col+1; i>=0 && j<chess.size(); i--,j++)
            if(chess[i][j] == 1)
                return false;
        
        return true;
    }
    
    void nQueens(vector<vector<int>>chess, vector<vector<string>>&ans,vector<string>&board, int row){
        if(row == chess.size()){
            ans.push_back(board);
            return;
        }
        for(int col = 0; col<chess.size(); col++){
            if(isQueenSafe(chess, row, col)){
            chess[row][col] = 1;
            board[row][col] = 'Q';
            nQueens(chess, ans, board, row+1);
             board[row][col] = '.';
            chess[row][col] = 0;
        }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>>chess(n, vector<int>(n, 0));
        vector<vector<string>>ans;
        vector<string>board(n);
        string str(n, '.');
        for(int i=0; i<n; i++)
            board[i] = str;
        nQueens(chess, ans, board, 0);
        return ans;
    }
};