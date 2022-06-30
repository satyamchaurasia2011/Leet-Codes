class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int moves = 0, ind = nums.size()/2;
        for(int i = ind-1; i>=0; i--)
            moves += nums[ind] - nums[i];
        for(int i = ind+1; i<nums.size(); i++)
            moves += nums[i] - nums[ind];
        return moves;
    };
};