class Solution {
public:
    static bool comp(vector<int>a, vector<int>b)
    {
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int tot_unit = 0, i=0;
        while(truckSize > 0 && i<boxTypes.size())
        {
            if(truckSize - boxTypes[i][0] > 0)
            {
                tot_unit += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else{
                tot_unit += truckSize * boxTypes[i][1];
                break;
            }
            i++;
            
        }
        return tot_unit;
    }
};