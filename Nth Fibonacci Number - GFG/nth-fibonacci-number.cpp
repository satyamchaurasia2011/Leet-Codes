//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int rec(int n, vector<int>&fib){
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(fib[n] != -1) return fib[n];
        
        fib[n] = rec(n-2, fib)%1000000007 + rec(n-1, fib)%1000000007;
        return fib[n]%1000000007;
    }
    int nthFibonacci(int n){
        // code here
        vector<int>fib(n+1, -1);
        return rec(n, fib);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends