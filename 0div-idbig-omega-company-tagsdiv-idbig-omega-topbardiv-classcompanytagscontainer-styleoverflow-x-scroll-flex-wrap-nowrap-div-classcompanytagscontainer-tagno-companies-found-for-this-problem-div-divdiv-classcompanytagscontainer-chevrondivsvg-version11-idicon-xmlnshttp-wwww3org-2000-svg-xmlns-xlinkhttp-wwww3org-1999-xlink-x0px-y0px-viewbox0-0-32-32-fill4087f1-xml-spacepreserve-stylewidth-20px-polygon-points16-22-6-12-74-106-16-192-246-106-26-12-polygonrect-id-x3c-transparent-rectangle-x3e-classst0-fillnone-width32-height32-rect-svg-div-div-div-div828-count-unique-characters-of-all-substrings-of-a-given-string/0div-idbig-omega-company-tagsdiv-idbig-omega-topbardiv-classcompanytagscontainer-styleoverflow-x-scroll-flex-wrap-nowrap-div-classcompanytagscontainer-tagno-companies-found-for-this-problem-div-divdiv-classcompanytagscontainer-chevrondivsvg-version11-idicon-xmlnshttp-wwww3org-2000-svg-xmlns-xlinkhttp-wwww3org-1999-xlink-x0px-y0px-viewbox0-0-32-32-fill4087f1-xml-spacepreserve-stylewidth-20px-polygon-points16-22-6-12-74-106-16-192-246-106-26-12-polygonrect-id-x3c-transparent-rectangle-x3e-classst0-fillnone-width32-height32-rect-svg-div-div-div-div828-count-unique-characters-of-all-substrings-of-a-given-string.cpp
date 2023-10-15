class Solution {
public:
    int uniqueLetterString(string s) {
        int n = s.length();
        vector<vector<int>> ans(26);
        for(int i = 0;i<26;i++)
            ans[i].push_back(-1);
        for(int i = 0;i<n;i++)
            ans[s[i] - 'A'].push_back(i);
        for(int i = 0;i<26;i++)
            ans[i].push_back(n);
        long long count = 0;
        for(int i = 0;i<26;i++)
            for(int j = 1;j<ans[i].size()- 1;j++)
                count += (ans[i][j] - ans[i][j-1]) * (ans[i][j+1] - ans[i][j]);
        return count;
    }
};