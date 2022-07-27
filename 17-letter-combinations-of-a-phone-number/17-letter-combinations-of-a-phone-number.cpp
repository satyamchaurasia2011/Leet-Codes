class Solution {
public:
    vector<string>keys{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void result(string digits, vector<string>&ans, string asf){
        if(digits.size() <= 0)
        {
            ans.push_back(asf);
            return;
        }
        string rem = digits.substr(1);
         for(auto c : keys[digits[0]-48])
            result(rem, ans, asf+c);
    }
    vector<string> letterCombinations(string digits) {
       
        vector<string>ans;
         if(digits == "") return ans;
        result(digits, ans, "");
        return ans;
    }
};