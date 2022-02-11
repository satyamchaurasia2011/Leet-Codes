class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>vec1(26,0);
        vector<int>vec2(26,0);
        int size1 = s1.length();
        int size2 = s2.length();
        if(size2<size1)
            return false;
        for(int i=0; i<size1; i++)
            vec1[s1[i]-'a']++;
       //first window
        for(int i=0; i<size1; i++)
            vec2[s2[i]-'a']++;
        if(vec1 == vec2)
            return true;
        for(int i=size1; i<size2; i++)
        {
           vec2[s2[i-size1]-'a']--;
           vec2[s2[i]-'a']++;
            if(vec1 == vec2) return true;
        }
        return false;;
        
    }
};