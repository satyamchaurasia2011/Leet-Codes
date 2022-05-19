class Solution {
public:
    int pre = -1;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(pre == -1) pre = image[sr][sc];
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != pre || image[sr][sc] == newColor)
            return image;
        
        image[sr][sc] = newColor;
           
        floodFill(image, sr-1, sc, newColor);
        floodFill(image, sr, sc-1, newColor);
        floodFill(image, sr+1, sc, newColor);
        floodFill(image, sr, sc+1, newColor);
        return image;
    }
};