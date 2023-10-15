class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map<char, int>mp;
        // char ans;
        // for(char c: t)
        // {
        //     mp[c]++;
        // }
        // for(char c: s)
        // {
        //     mp[c]--;
        // }
        // for(auto c : mp)
        // {
        //     if(c.second == 1)
        //     {
        //         ans = c.first;
        //     }
        // }
        // return ans;
        for(int i = 0;i<s.size();i++)
        {
            t[i+1] += t[i] - s[i];
        }
        return t[t.size()-1];
    }
};