class Solution {
public:
    int candy(vector<int>& ratings) {
      int m = ratings.size();
      vector<int>left2right(m,1);
      vector<int>right2left(m,1);
        for(int i=1; i<m; i++){
            if(ratings[i] > ratings[i-1])
                left2right[i] = left2right[i-1]+1;
        }
        for(int i=m-2; i>=0; i--){
            if(ratings[i] > ratings[i+1])
                right2left[i] = right2left[i+1]+1;
        }
        int sum = 0;
        for(int i=0; i<m; i++)
            sum += max(left2right[i], right2left[i]);
        return sum;
    }
};