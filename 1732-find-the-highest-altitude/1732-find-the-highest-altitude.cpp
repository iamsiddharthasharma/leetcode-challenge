class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int alt= 0;
        int mx = 0;
        for(int i = 1;i<=n;i++)
        {
            alt+= gain[i-1];
            mx = max(mx, alt);
        }
        return mx;
    }
};