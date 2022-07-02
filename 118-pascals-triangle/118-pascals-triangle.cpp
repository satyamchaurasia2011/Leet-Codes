class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pt(numRows);
        pt[0].push_back(1);
        if(numRows >= 2){
            pt[1].push_back(1);
            pt[1].push_back(1);
            int i=2;
            while(i < numRows){
                pt[i].push_back(1);
                
                for(int j=1; j<i; j++){
                    pt[i].push_back(pt[i-1][j-1]+pt[i-1][j]);
                }
                pt[i].push_back(1);
                i++;
            }
        }
        return pt;
    }
};