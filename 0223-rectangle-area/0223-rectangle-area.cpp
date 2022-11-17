class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = (ax2-ax1)*(ay2-ay1);
        int area2 = (bx2-bx1)*(by2-by1);
        
        int left = max(ax1, bx1);
        int right = min(ax2, bx2);
        
        int xoverlap = right-left;
        
        int bottom = max(ay1, by1);
        int top = min(ay2, by2);
        
        int yoverlap = top-bottom;
        
        int areaOfOverlap = 0;
        if(xoverlap > 0 && yoverlap > 0)
            areaOfOverlap = xoverlap * yoverlap;
        
        int totalArea = area1 + area2 - areaOfOverlap;
        return totalArea;
    }
};