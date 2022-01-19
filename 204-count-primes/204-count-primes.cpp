class Solution {
public:
    
    int countPrimes(int n) {
        if(n<=1)
            return 0;
        bool isPrime[n];
        int count=0;
        for(int i=2 ; i<n; i++)
        {
           isPrime[i] = true;
        }
        for(int i = 2; i<=n/2; i++)
        {
            if(isPrime[i]){
            for(int j = 2*i; j<n; j += i)
                isPrime[j] = false;
            }
        }
        for(int i=2; i<n; i++){
            if(isPrime[i])
                count++;
        }
        return count;
            
    }
};