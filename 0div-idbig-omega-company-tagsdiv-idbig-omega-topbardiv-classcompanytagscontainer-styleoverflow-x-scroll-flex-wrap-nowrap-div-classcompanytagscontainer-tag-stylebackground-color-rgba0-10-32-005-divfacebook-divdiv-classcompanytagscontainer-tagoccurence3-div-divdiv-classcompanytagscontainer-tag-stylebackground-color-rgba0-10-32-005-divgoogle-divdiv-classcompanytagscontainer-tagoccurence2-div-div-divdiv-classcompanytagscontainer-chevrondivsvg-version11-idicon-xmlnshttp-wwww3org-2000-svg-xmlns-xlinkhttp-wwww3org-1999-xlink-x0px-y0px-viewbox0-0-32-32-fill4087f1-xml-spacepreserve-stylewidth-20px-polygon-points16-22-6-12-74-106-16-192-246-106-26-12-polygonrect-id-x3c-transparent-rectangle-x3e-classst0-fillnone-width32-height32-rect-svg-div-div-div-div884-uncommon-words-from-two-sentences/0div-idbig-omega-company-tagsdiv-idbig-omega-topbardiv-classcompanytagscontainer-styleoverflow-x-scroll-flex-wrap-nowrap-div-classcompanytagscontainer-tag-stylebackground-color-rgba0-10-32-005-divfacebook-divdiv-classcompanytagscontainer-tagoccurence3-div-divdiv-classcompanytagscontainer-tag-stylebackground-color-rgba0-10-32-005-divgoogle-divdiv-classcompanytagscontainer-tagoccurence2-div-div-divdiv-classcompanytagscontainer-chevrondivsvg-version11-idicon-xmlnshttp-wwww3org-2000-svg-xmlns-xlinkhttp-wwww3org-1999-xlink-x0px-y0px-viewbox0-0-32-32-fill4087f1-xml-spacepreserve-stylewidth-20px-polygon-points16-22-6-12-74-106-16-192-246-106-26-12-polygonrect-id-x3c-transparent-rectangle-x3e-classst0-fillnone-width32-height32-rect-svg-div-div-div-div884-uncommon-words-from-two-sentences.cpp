class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string word = "";
        unordered_map<string, int> mp;
        for(int i = 0;i<s1.length();i++)
        {
            if(s1[i]!= ' ')
            {
                word.push_back(s1[i]);
            }
            if(s1[i] == ' ' || i == s1.length() - 1)
            {
                mp[word]++;
                word = "";
            }
        }
        for(int i = 0;i<s2.length();i++)
        {
            if(s2[i]!= ' ')
            {
                word.push_back(s2[i]);
            }
            if(s2[i] == ' ' || i == s2.length() - 1)
            {
                mp[word]++;
                word = "";
            }
        }
        vector<string> ans;
        for(auto e :mp)
        {
            if(e.second == 1)
            {
                ans.push_back(e.first);
            }
        }
        return ans;
    }
};