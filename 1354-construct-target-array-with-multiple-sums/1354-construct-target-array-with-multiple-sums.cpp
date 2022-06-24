class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int>pq;
        unsigned int sum = 0;
        
        for(int x : target){
            sum += x;
            pq.push(x);
        }
            
        int i=0;
       
       while(pq.top() != 1)
        {
           int x = pq.top();
           pq.pop();
           sum -= x;
           if(sum >= x || sum < 1) return false;
           x = x % sum;
           sum += x;
           pq.push(x ? x : sum);
           
        }
        return true;
    }
};