class Solution {
public:
  int way = 0;
    bool isQueenSafe(vector<string>&board, int row, int col, int n){
        for(int i=row-1, j = col; i>=0; i--)
            if(board[i][j] == 'Q')
                return false;
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--)
            if(board[i][j] == 'Q')
                return false;
        for(int i=row-1, j=col+1; i>=0 && j<n; i--,j++)
            if(board[i][j] == 'Q')
                return false;
        
        return true;
    }
    
    void nQueens(vector<string>&board, int row, int n){
        if(row == n){
            way++;
            return;
        }
        for(int col = 0; col<n; col++){
            if(isQueenSafe(board, row, col, n)){
            board[row][col] = 'Q';
            nQueens(board, row+1, n);
             board[row][col] = '.';
        }
        }
    }
    int totalNQueens(int n) {
        vector<string>board(n);
        string str(n, '.');
        for(int i=0; i<n; i++)
            board[i] = str;
        nQueens(board, 0,n);
        return way;
    }
};