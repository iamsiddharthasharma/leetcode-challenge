class Solution {
public:
    int countBinarySubstrings(string& s) {
        int curr = 1;
        int prev = 0;
        int sum = 0;
        for(int i = 1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                curr++;
            }
            else
            {
                sum += min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }
        return sum + min(prev, curr);
    }
};