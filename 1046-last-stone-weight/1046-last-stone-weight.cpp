class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int sub = 0;
        int i = stones.size()-1;
        while(i > 0)
        {
           sort(stones.begin(), stones.end());
            sub = stones[i] - stones[i-1];
            stones.pop_back();
            stones.pop_back();
            if(sub>0) stones.push_back(sub);
             i = stones.size()-1;
        }
        return i < 0 ? 0 : stones[i];
    }
};