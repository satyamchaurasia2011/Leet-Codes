class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        //    4
        // 1.5  1.5
    // 0.25  0.50   0.25                   // 0.25 0.25+0.25 0.25 
        vector<vector<double>>sham(102, vector<double>(102, 0));
        sham[0][0] = poured;
        for(int i=0; i<query_row; i++)
        {
            for(int j=0; j<=i; j++)
            {
               double flow = (sham[i][j]-1)/2.0; 
               if(flow > 0)
               {
                   sham[i+1][j] += flow;
                   sham[i+1][j+1] += flow;
               }
            }
        }
        return min(1.0, sham[query_row][query_glass]);
    }
};