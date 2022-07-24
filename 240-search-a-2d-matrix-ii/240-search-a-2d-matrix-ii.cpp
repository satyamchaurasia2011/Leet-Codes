class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0; i<m; i++){
            if(matrix[i][0] == target || matrix[i][n-1] == target)
                return true;
            else if(matrix[i][0] < target && matrix[i][n-1] > target){
                int strt = 0;
                int end = n-1;
                while(strt <= end){
                    int mid = (strt+end)/2;
                    if(matrix[i][mid] == target)
                        return true;
                    else if(target < matrix[i][mid])
                        end = mid-1;
                    else
                        strt = mid+1;
                }
            }
        }
        return false;
    }
};