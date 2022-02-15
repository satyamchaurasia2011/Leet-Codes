class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'I')
            {
                if(s[i+1] == 'V' && i+1<s.size()){
                    num += 4;
                    i++;
                }    
                else if(s[i+1] == 'X' && i+1<s.size()){
                    num += 9;
                    i++;
                }  
                else
                    num += 1;
            }
            else if(s[i] == 'V')
                num += 5;
            else if(s[i] == 'X')
             {
                if(s[i+1] == 'L' && i+1<s.size()){
                    num += 40;
                    i++;
                }   
                else if(s[i+1] == 'C' && i+1<s.size()){
                    num += 90;
                    i++;
                }   
                else
                    num += 10;
            }
            else if(s[i] == 'L')
                num += 50;
            else if(s[i] == 'C')
                 {
                if(s[i+1] == 'D' && i+1<s.size()){
                    num += 400;
                    i++;
                }    
                else if(s[i+1] == 'M' && i+1<s.size()){
                     num += 900;
                    i++;
                }   
                else
                    num += 100;
            }
            else if(s[i] == 'D')
                num += 500;
            else if(s[i] == 'M')
                num += 1000;
        }
        return num;
    }
};