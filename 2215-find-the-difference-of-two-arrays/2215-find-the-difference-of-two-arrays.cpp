class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<vector<int>> ans(2);
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        for (int num : nums1) {
            if (set2.find(num) == set2.end()) {
                ans[0].push_back(num); // num is in nums1 but not in nums2
                set2.insert(num);
            }
        }

        for (int num : nums2) {
            if (set1.find(num) == set1.end()) {
                ans[1].push_back(num); // num is in nums2 but not in nums1
                set1.insert(num);
            }
        }
        return ans;
    }
};