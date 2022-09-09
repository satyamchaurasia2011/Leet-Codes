class Solution {
public:
    static bool compare(vector<int>&start, vector<int>&end){
        if(start[0] == end[0])
            return start[1] > end[1];
        return start[0] < end[0];
    }
        
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), compare);
        int count = 0 ;
        int max_val = INT_MIN;
        for(int i=properties.size()-1; i>=0; i--){
            if(properties[i][1] < max_val)
                count++;
            if(properties[i][1] > max_val){
                max_val = properties[i][1];
            }
        }
        return count;
    }
};