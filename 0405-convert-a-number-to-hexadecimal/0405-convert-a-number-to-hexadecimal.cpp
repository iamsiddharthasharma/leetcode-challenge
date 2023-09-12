const string HEX="0123456789abcdef";
class Solution {
public:
    string toHex(int num) {
        string ans;
        if(num==0)
        {
            ans = "0";
            return ans;
        }
        unsigned int n = num;
        while(n>0)
        {
            int a = n%16;
            ans += HEX[a];
            n = n/16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};