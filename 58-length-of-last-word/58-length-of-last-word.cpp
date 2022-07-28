class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0;
        int i=s.size()-1;
        while(i >= 0){
            if(s[i] == ' ')
                i--;
            else 
                break;
        }
        while(i>=0 && s[i] != ' ')
        {
            size++;
            i--;
        }
        return size;
    }
};