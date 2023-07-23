class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int right = 0;
        int left = 0;
        int ans = 0;
        while(right<n)
        {
            if(nums[right]==0)
            {
                cnt++;
            }
            while(cnt>k)
            {
                if(nums[left]==0)
                {
                    cnt--;
                }
                left++;
            }
            right++;
            ans = max(ans, right-left);
        }
        return ans;
    }
};