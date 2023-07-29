class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        sort(arr.begin(), arr.end());
        int i = 0;
        while(i<n)
        {
            int count = 1;
            for(int j = i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            ans.push_back(count);
            i = i + count;
        }
        sort(ans.begin(), ans.end());
        n = ans.size();
        for(int i = 0;i<n-1;i++)
        {
            if(ans[i]==ans[i+1])
            {
                return false;
            }
        }
        return true;
    }
};