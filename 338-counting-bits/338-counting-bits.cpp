class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>vec;
        for(int i=0; i<=n; i++)
        {
            int count = 0;
            for(int j=0; j<32; j++)
                if(i&(1<<j))
                    count++;
            vec.push_back(count);
        }
        return vec;
    }
};