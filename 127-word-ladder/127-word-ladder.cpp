class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>myset;
        bool ispresent = false;
        for(auto &&s : wordList){
            if(s == endWord)
                ispresent = true;
            myset.insert(s);
        }
        if(!ispresent)
            return 0;
        queue<string>que;
        que.push(beginWord);
        int depth = 0;
        while(!que.empty())
        {
            depth += 1;
            int lsize = que.size();
            while(lsize--)
            {
                string word = que.front();
                que.pop();
                for(int i=0; i<word.length(); i++)
                {
                    string temp = word;
                    for(char c = 'a'; c <= 'z'; c++)
                    {
                       temp[i] = c;
                        if(temp == word)
                            continue;
                        else if(temp == endWord)
                            return depth+1;
                        else if(myset.find(temp) != myset.end()){
                            que.push(temp);
                            myset.erase(temp);
                        }      
                    }
                }
            }
            
        }
        return 0;
    }
};