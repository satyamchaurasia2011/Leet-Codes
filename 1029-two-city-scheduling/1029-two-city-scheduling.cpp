class Solution {
   static bool comparator(vector<int> &a, vector<int> &b)
    {
        return a[1]-a[0] > b[1]-b[0];
    }
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), comparator);
        int sum = 0;
        int n = costs.size();
        for(int i=0; i<n; i++)
            sum += i < n/2 ? costs[i][0] : costs[i][1];
        
            
        return sum;
    }
};