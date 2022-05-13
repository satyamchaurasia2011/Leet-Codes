class Solution {
    void LpsArray(vector<int> &pat, string needle)
    {
        int i=1;
        int prev = 0;
        pat[0] = 0;
        while(i < pat.size())
        {
            if(needle[i] == needle[prev])
            {
                prev++;
                pat[i] = prev;
                i++;
            }
            else{
                if(prev == 0){
                    pat[i] = 0;
                    i++;
                }
                else{
                    prev = pat[prev-1];
                }
            }
        }
    }
public:
    int strStr(string haystack, string needle) {
         vector<int>pat(needle.size());
         LpsArray(pat, needle);
        int i=0, j=0;
        int start=0;
        while(i < haystack.size())
        {
            if(haystack[i] == needle[j])
            {
                i++;
                j++;
            }else if(i < haystack.size() && haystack[i] != needle[j]){
                if(j != 0)
                    j = pat[j-1];
                else
                   i++;
            }
            if(j == needle.size())
                return i-j;
            
        }
        return -1;
    }
};