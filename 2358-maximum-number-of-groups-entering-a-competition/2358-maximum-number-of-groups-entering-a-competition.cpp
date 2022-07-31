class Solution {
public:
    int maximumGroups(vector<int>& grades) {
       int n = grades.size();

        int group = 1;
        int total = 0;
        while(total <= n){
            total += group;
            group++;
        }
      
        return group-2;
    }
};