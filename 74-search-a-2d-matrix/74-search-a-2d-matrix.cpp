class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        for(int i=0; i<n; i++)
        {
            int m = matrix[i].size();
            if(matrix[i][m-1] == target)
                return true;
            else if(matrix[i][m-1] > target){
                int l = 0;
                int r = m-1;
                while(l <= r)
                {
                    int mid = (l+r)/2;
                    if(matrix[i][mid] == target)
                        return true;
                    else if(matrix[i][mid] > target)
                        r = mid - 1;
                    else
                        l = mid + 1;
                }
            }
            
        }
        return false;
    }
};