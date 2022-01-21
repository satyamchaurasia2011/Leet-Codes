class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int surplus = 0;
        int total_surp = 0;
        int size = gas.size();
        int start = 0;
        for(int i=0; i<size; i++)
        {
           total_surp += gas[i] - cost[i];
            surplus += gas[i] - cost[i];
            if(surplus<0){
                surplus=0;
                start = i+1;
            }
                
        }
        return total_surp<0 ? -1 : start;
        
            return -1;
    }
};