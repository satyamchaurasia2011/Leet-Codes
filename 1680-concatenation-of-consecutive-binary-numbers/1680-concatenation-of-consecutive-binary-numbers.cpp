class Solution {
public:
    int calc_len(long long n){
        long len = 0;
        for(long i=n; i; i >>= 1, ++len);
        return len;
    }
    int concatenatedBinary(int n) {
        long long mod = 1e9+7;
        long long ans = 0, len = 0;
        for(long long i=1; i<=n; i++){
            len = calc_len(i);
            ans = ((ans << len) + i)%mod;
        }
        return ans;
}
};