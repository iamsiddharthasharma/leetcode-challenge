class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for(char c: s)
        {
            mp[c]++;
        }
        for(char c: t)
        {
            mp[c]--;
        }
        for(auto c: mp)
        {
            if(c.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};