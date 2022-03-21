class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
       vector<int> A(7, 0), B(7, 0), same(7, 0);
        for(int i=0; i<tops.size(); i++)
        {
            A[tops[i]]++;
            B[bottoms[i]]++;
            if(tops[i] == bottoms[i])
                same[tops[i]]++;
        }
        for(int i=0; i<7; i++)
            if(A[i] + B[i] - same[i] == tops.size())
                return tops.size() - max(A[i], B[i]);
        
        return -1;
    }
};