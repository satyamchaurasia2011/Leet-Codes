class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<matrix.size(); i++)
            for(int j=0; j<matrix.size(); j++)
                pq.push(matrix[i][j]);
        int p = 0;
        while(p != k-1){
            pq.pop();
            p++;
        }
        return pq.top();
    }
};