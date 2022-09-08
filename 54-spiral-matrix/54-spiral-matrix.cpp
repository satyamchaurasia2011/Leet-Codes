class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int tot = matrix.size() * matrix[0].size();
        vector<int>res;
        int count = 0;
        int minr = 0, minc = 0;
        int maxr = matrix.size()-1;
        int maxc = matrix[0].size()-1;
        while(count < tot){
            //top
            for(int i=minr, j = minc; count < tot && j<=maxc; j++){
                res.push_back(matrix[i][j]);
                count++;
            }
            minr++;
            //right
            for(int i=minr, j = maxc; count < tot && i<=maxr; i++){
                res.push_back(matrix[i][j]);
                count++;
            }
            maxc--;
            //down
            for(int i=maxr, j = maxc; count < tot && j>=minc; j--){
                res.push_back(matrix[i][j]);
                count++;
            }
            maxr--;
            //left
            for(int i=maxr, j = minc; count < tot && i>=minr; i--){
                res.push_back(matrix[i][j]);
                count++;
            }
            minc++;
        }
        return res;
    }
};