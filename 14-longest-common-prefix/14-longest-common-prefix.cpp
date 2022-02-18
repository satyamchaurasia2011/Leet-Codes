class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<char, int>mp;
        int min=strs[0].size();
        int f=0;
        for(int i=1; i<strs.size(); i++)
            if(min > strs[i].size())
                min = strs[i].size();
        string str="";
        for(int i=0; i<min; i++)
        {
            for(int j=0; j<strs.size()-1; j++)
            {
                if(strs[j][i] != strs[j+1][i]){
                    f=1;
                    break;
                }      
            }
             if(f == 0)
                 str += strs[0][i];
            else
                break;
        }
        return str;
    }
};