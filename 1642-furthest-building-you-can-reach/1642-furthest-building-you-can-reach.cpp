class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
       priority_queue<int, vector<int>, greater<int>>pq;
        int brickSum = 0;
        for(int i=1; i<heights.size(); i++)
        {
            int d = heights[i] - heights[i-1];
            if(d<=0)
               continue;
            pq.push(d);
            if(pq.size() > ladders)
            {
                brickSum += pq.top();
                pq.pop();
            }
            if(brickSum > bricks) return i-1;
        }
        return heights.size()-1;
       
    }
};