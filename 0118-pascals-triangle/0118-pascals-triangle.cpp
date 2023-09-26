class Solution {
public:
    vector<int> rowgen(int n)
    {
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1);
        for(int i = 1;i<n;i++)
        {
            ans *= (n-i);
            ans /= i;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1;i<=numRows;i++)
        {
            ans.push_back(rowgen(i));
        }
        return ans;
    }
};