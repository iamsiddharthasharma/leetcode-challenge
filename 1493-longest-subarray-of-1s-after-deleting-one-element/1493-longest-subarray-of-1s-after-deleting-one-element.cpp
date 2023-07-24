class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        int start=0;
        int cz = 0;
        for(int i = 0;i<n;i++)
        {
            cz += (nums[i]==0);
            if(cz>1)
            {
                cz -= (nums[start]==0);
                start++;
            }
            mx  = max(mx, i - start);
        }
        return mx;
    }
};