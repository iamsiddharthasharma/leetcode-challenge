class Solution {
public:
    int countPrimes(int n) {
        vector<bool> v(n, true);
        int ans = 0;
        for(int i = 2;i<n;i++)
        {
            if(v[i]==true)
            {
                ans++;
                for(int j = i*2;j<n;j+=i)
                {
                    v[j] = false;
                }
            }
        }
        return ans;
    }
};