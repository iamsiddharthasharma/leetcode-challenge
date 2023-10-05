class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // return max_element(nums.begin(), nums.end()) - nums.begin();
        int l = 1;
        int n = nums.size();
        int h = n -2;
        if(n==1)
        {
            return 0;
        }
        if(nums[n-1]>nums[n-2])
        {
            return n-1;
        }
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(nums[mid]>nums[mid+1] && nums[mid-1]<nums[mid])
            {
                return mid;
            }
            if(nums[mid]<nums[mid+1])
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return 0;
    }
};