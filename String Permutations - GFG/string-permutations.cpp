//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void perm(string s, vector<string>&res, string asf){
        if(s.size() <= 0){
            res.push_back(asf);
            return;
        }
        for(int i=0; i<s.size(); i++){
             string rem = s;
             rem.erase(rem.begin() + i);
              perm(rem, res, asf + s[i]);
        }
       
       
    }
    vector<string> permutation(string s)
    {
        vector<string>res;
        perm(s, res, "");
        sort(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends