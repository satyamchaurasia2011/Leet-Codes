class Solution {
public:

void solve(vector<int>& num,vector<vector<int>> &ans, int target,vector<int> &temp,int ind)
{
    if(target==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=ind;i<num.size();i++)
    {
        if(num[i]>target)
            break;    
        if(i  > ind && num[i] == num[i-1])
            continue;
        temp.push_back(num[i]);
        solve(num,ans,target-num[i],temp,i+1);  //call for next  index element
        temp.pop_back();  //backtrack
        
    }
}

vector<vector<int>> combinationSum2(vector<int>& num, int target) {
    sort(num.begin(), num.end());  
    vector<vector<int>> ans;
    vector<int>temp;
    solve(num,ans,target,temp,0);
    return ans;
}
};