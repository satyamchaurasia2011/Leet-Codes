class Solution {
public:
    int Fib[31] = {0};
    int fib(int n) {
        if(n <= 1)
            return n;
        
        if(Fib[n] != 0)
            return Fib[n];
        Fib[n] = fib(n-1)+fib(n-2);
        return Fib[n];
    }
};