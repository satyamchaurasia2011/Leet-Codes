class Solution {
public:
   bool isSafe(int row, int col, vector<vector<char>> &board, char val){
    
    for(int i=0; i<9; i++){
        // Check row
        if(board[row][i] == val) return false;
        
        // Check column
        if(board[i][col] == val) return false;
        
        // Check 3*3 matrix
        int x = 3 * (row/3) + i/3;
        int y = 3 * (col/3) + i%3;
        if(board[x][y] == val) return false;
    }
    
    return true;
}

bool solve(vector<vector<char>>& board){
    
    for(int row = 0; row < 9; row++){
        for(int col = 0; col < 9; col++){
            
            if(board[row][col] != '.'){
                char val = board[row][col];
                board[row][col] = '.';
                
                bool valid = isSafe(row, col, board, val);
                
                if(!valid){
                    return false;
                }
                
                board[row][col] = val;
            }
            
        }
    }
    
    return true;
}

bool isValidSudoku(vector<vector<char>>& board) {
    bool ans = solve(board);
    return ans;
}
};