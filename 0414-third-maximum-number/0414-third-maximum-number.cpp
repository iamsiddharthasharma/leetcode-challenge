class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        if(nums.size()<3)
            return nums[nums.size()-1];
        else
            return nums[nums.size()-3];
    
    }
};