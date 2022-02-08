class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int num = 0; int pos=0;
        int p=0,q=0;
        for(auto &&a : nums)
            num ^= a;
        for(int i=0; i<32; i++)
            if((num & (1<<i)) > 0)
            {
                pos = i;
                break;
            }
        for(int i=0; i<nums.size(); i++)
        {
            if(((nums[i])&(1<<pos)) !=0)
                p ^= nums[i];
            else
                q ^= nums[i];
        }
        return {p,q};
    }
};