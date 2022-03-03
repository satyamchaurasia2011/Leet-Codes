class Solution {
public:
    
    ///AP series 
    // |2|5|9|12|15|18|22|26|30|34||36|38|40|41|
    // first 2 is no ap then check 3 element's A.P if yes then add +1 with previous if there is already ap.
    // |0|0|0|0|1|2|0|1|2|3|0|1|2|0| add all element  = 12 -ans
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int>vec(nums.size());
        if(nums.size()<2)
            return 0;
        vec[0] = vec[1] = 0;
        int i=2;
        while(i < nums.size())
        {
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2])
                vec[i] = vec[i-1] + 1;
            else
                vec[i] = 0;
            i++;
        }
        int sum=0;
        for(auto a : vec)
            sum += a;
        return sum;
    }
};