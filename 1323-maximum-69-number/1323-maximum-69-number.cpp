class Solution {
public:
    int maximum69Number (int num) {
        string p = to_string(num);
        int i=0; 
        while(i < p.size())
        {
            if(p[i] == '6'){
                p[i] = '9';
                break;
            }
            i++;
        }
        return stoi(p);
    }
};