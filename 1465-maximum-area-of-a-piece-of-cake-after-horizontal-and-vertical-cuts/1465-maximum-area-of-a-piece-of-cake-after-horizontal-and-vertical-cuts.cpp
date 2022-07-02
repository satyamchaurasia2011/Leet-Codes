class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int max_hor = horizontalCuts[0], max_vert = verticalCuts[0];
        for(int i=0; i<horizontalCuts.size()-1; i++){
            max_hor = max(max_hor, horizontalCuts[i+1]-horizontalCuts[i]);
        }
         max_hor = max(max_hor, h - horizontalCuts[horizontalCuts.size()-1]);
       for(int i=0; i<verticalCuts.size()-1; i++){
            max_vert = max(max_vert, verticalCuts[i+1]-verticalCuts[i]);
        }
         max_vert = max(max_vert, w - verticalCuts[verticalCuts.size()-1]);
        
        return ((long)max_vert*(long)max_hor)%1000000007;
    }
};