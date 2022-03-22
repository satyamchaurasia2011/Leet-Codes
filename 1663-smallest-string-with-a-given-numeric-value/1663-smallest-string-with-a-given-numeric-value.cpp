class Solution {
public:
    string getSmallestString(int n, int k) {
        string str(n, 'a');
        for(int i = n-1; i>=0; i--)
        {
            if(k - (n-1) > 26){
                 str[i] = 'z';
                k = k - 26;
            } 
            else{
                str[i] = 'a' + k-n;
                break;
            }  
            n--;
        }
        return str;
    }
};