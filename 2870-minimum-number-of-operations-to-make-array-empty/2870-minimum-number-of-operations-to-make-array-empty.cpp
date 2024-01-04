class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(auto x: nums)
        {
            mp[x]++;
        }
        for(auto x: mp)
        {
            if(x.second ==1)
            {
                return -1;
            }
            int t = x.second;
            ans += t/3;
            if(t%3)
            {
                ans++;
            }
        }
        return ans;
    }
};