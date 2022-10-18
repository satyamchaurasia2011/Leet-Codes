class Solution {
public:
   string mp(string str){
       string freq = "";
       int i=0;
       
       while(i < str.size())
       {
           int count = 1;
           while(i < str.size()-1 && str[i] == str[i+1]){
               count++;
               i++;
           }
           freq += to_string(count) + str[i];
           i++;
       }
       if(freq == "") return ("1"+str);
       return freq;
    }
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        if(n==2) return "11";
        string str = countAndSay(n-1);
        return mp(str);        
    }
};