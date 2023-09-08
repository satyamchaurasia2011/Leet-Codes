//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void path(vector<vector<int>> &m, int n, int r, int c, vector<string>&ans, string dir, vector<vector<bool>>&visited){
        if(r < 0 || c < 0 || r == n || c == n || visited[r][c] || m[r][c] == 0)
          return;
        if(r == n-1 && c == n-1){
            if(dir.size() > 0) ans.push_back(dir);
            return;
        }
        visited[r][c] = true;
        path(m, n, r-1, c, ans, dir+"U", visited);
        path(m, n, r+1, c, ans, dir+"D", visited);
        path(m, n, r, c-1, ans, dir+"L", visited);
        path(m, n, r, c+1, ans, dir+"R", visited);
        visited[r][c] = false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        vector<vector<bool>>visited(n, vector<bool>(n, false));
        path(m, n, 0, 0, ans, "", visited);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends