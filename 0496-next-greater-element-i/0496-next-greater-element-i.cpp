class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> ans;
        // int n1 = nums1.size();
        // int n2 = nums2.size();
        // int m = 0;
        // for(int i = 0;i<n1;i++)
        // {
        //     m = -1;
        //     for(int j = 0;j<n2;j++)
        //     {
        //         if(nums1[i]==nums2[j])
        //         {
        //             for(int k = j;k<n2;k++)
        //             {
        //                 if(nums2[k]>nums2[j])
        //                 {
        //                     m=nums2[k];
        //                     break;
        //                 }
        //             }
        //             ans.push_back(m);
        //         }
        //     }
        // }
        // return ans;
        stack<int> st;
        unordered_map<int, int> mp;
        for(int i = nums2.size()-1;i>=0;i--)
        {
            int ele = nums2[i];
            while(!st.empty() && st.top() <= ele)
            {
                st.pop();
            }
            int res = (st.empty()) ? -1 : st.top();
            mp.insert({ele, res});
            st.push(ele);
        }
        vector<int> ans;
        for(auto x : nums1)
        {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};