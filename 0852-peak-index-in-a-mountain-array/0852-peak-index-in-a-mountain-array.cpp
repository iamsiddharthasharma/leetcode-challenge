class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int mx = 0;
        int pos = 0;
        for(int i = 0;i<n;i++)
        {
            mx = max(mx, arr[i]);
        }
        for(int i = 0;i<n;i++)
        {
            if(arr[i]==mx)
            {
                pos = i;
            }
        }
        return pos;
    }
};