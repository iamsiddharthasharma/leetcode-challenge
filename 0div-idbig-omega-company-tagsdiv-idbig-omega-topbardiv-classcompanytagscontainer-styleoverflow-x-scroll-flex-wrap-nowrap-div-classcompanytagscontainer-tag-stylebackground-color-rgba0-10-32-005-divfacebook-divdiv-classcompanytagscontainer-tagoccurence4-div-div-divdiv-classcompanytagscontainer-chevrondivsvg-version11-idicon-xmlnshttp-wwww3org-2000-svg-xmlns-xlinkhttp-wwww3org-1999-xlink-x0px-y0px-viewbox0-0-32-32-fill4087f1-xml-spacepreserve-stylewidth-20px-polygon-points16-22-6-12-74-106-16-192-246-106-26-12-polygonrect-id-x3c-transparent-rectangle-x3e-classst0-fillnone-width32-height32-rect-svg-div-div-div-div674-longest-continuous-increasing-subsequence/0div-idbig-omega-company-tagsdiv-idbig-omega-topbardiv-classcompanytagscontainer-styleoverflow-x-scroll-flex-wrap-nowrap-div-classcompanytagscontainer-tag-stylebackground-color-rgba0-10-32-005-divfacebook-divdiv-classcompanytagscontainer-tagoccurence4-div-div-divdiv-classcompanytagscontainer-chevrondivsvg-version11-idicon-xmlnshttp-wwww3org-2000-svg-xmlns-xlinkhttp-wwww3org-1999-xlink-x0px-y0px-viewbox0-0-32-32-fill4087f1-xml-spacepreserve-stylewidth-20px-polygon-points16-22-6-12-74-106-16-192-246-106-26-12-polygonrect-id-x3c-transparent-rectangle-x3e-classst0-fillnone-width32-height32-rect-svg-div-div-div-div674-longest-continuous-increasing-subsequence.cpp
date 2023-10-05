class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int mx = 1;
        int count = 1;
        for(int i =1;i<n;i++)
        {
            if(nums[i-1]<nums[i])
            {
                count++;
                mx = max(mx, count);
            }
            else
            {
                count = 1;
            }
           
        }
        return mx;
    }
};