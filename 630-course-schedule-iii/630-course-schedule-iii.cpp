class Solution {
public:
    static bool comp(vector<int>&a, vector<int>&b){
            return a[1] < b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        int count = 0,sum=0;
        sort(courses.begin(), courses.end(), comp);
        priority_queue<int>pq;
       for(int i=0; i<courses.size(); i++)
       {
           pq.push(courses[i][0]);
           sum += courses[i][0];
           if(sum > courses[i][1]){
               sum -= pq.top();
               pq.pop();
           }
       }
        return pq.size();
            
    }
};