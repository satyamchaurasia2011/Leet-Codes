class Solution {
public:
   
//     int findMax(vector<int>&cardPoints, int l, int r, int k, vector<vector<int>> &dp){
//         if(k == 0)
//             return 0;
//         if(dp[l][r] == -1){
//             int left = cardPoints[l] + findMax(cardPoints, l+1, r, k-1, dp);
//             int right = cardPoints[r] + findMax(cardPoints, l, r-1, k-1, dp);
//             dp[l][r] = max(left, right);
//         }
          
//        return dp[l][r];
//     }
    int maxScore(vector<int>& cardPoints, int k) {
       //  int j = cardPoints.size();
       //  vector<vector<int>> dp(j+1, vector<int>(j+1,-1));
       // return findMax(cardPoints, 0, cardPoints.size()-1, k, dp);
        
        
        //Another Method sliding window
        int sum = 0, sw = 0;
         for(auto a : cardPoints)
             sum += a;
       int rem = cardPoints.size()-k;
        for(int i=0; i<rem; i++)
            sw += cardPoints[i];
        int max_card = sum - sw;
        for(int i=rem; i<cardPoints.size(); i++)
        {
            sw -= cardPoints[i-rem];
            sw += cardPoints[i];
            max_card = max(max_card, sum-sw);
        }
        return max_card;
    }
};