//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void recReverse(stack<int> &St, stack<int> &St1){
        if(St.empty()){
            St = St1;
           
            return;
        }
        int temp = St.top();
        St.pop();
        cout<<temp<<" ";
        St1.push(temp);
        Reverse(St);
    }
    void Reverse(stack<int> &St){
        stack<int>St1;
        recReverse(St, St1);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends