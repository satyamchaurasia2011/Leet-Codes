class Solution {
public:
    int minPartitions(string n) {
    int max_dig = -1;
        for(int i=0; i<n.size(); i++)
        {
            int m = (n[i] - '0');
            max_dig = max(max_dig, m);
        }
        return max_dig;
    }
};