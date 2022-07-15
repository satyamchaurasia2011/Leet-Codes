class Solution {
public:
    
    void nQueens(vector<vector<string>>&ans,vector<string>&board, int row, int n, vector<bool>cols, vector<bool>ld, vector<bool>rd){
        if(row == n){
            ans.push_back(board);
            return;
        }
        for(int col = 0; col<n; col++){
            if(!cols[col] && !ld[row+col] && !rd[row-col+n-1]){
            board[row][col] = 'Q';
            cols[col] = true;
            ld[row+col] = true;
            rd[row-col+n-1] = true;
            nQueens(ans, board, row+1, n, cols, ld, rd);
             board[row][col] = '.';
            cols[col] = false;
            ld[row+col] = false;
            rd[row-col+n-1] = false;
        }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string str(n, '.');
        for(int i=0; i<n; i++)
            board[i] = str;
        vector<bool>cols(n, false);
        vector<bool>ld(2*n-1, false);
        vector<bool>rd(2*n-1, false);
        nQueens(ans, board, 0,n, cols, ld, rd);
        return ans;
    }
};