class Solution {
public:
    string process(string str)
    {
        string process;
        for(char c:str)
       {
           if(c=='#' && !process.empty())
           {
               process.pop_back();
           }
           else if(c!='#')
           {
               process.push_back(c);
           }
       }
       return process;
    }
    bool backspaceCompare(string s, string t) {
       return process(s) == process(t);
    }
};