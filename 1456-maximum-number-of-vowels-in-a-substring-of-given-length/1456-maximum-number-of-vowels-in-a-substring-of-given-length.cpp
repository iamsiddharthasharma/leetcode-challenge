class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int count = 0;
        unordered_set<char> vowels{'a','e','i','o','u'};
        for(int i = 0;i<k;i++)
        {
            count+=vowels.count(s[i]);
        }
        int ans = count;
        for(int i = k;i<n;i++)
        {
            count+= vowels.count(s[i])-vowels.count(s[i-k]);
            ans = max(count, ans);
        }
        return ans;
    }
};