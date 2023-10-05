class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        vector<int> ans;
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        for(int i = 0;i<nums1.size()-1;i++)
        {
            if(nums1[i]==nums1[i+1])
            {
                ans.push_back(nums1[i]);
            }
        }
        return ans;
    }
};