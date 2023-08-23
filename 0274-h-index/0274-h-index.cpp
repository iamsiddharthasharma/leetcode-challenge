class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        sort(c.begin(), c.end(), greater<int>()); // Sort the vector in descending order

        int hIndex = 0;
        for (int i = 0; i < n; i++) {
            if (c[i] >= i + 1) {
                hIndex = i + 1;
            } else {
                break;
            }
        }
        return hIndex;
    }
};