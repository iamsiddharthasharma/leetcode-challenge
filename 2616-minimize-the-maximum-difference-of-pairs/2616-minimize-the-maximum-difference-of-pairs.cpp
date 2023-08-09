// class Solution {
// public:
//     int minimizeMax(vector<int>& nums, int p) {
//         int n = nums.size();
//         vector<int> temp;
//         int mx = 0;
//         sort(nums.begin(), nums.end());
//         for(int i = 0;i<n;i++)
//         {
//             for(int j = i+1;j<n;j++)
//             {
//                 int min = abs(nums[i]-nums[j]);
//                 temp.push_back(min);
//             }
//         }
//         sort(temp.begin(), temp.end());
//         int n1 = temp.size();
//         for(int i = 0;i<p;i++)
//         {
//             int temp2 = temp[i];
//             mx = max(mx, temp2);
//         }
//         return mx;
//     }
// };
class Solution {
public:
    // Find the number of valid pairs by greedy approach
    int countValidPairs(vector<int>& nums, int threshold) {
        int index = 0, count = 0;
        while (index < nums.size() - 1) {
            // If a valid pair is found, skip both numbers.
            if (nums[index + 1] - nums[index] <= threshold) {
                count++;
                index++;
            }
            index++;
        }
        return count;
    }

    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = nums[n - 1] - nums[0];

        while (left < right) {
            int mid = left + (right - left) / 2;

            // If there are enough pairs, look for a smaller threshold.
            // Otherwise, look for a larger threshold.
            if (countValidPairs(nums, mid) >= p) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};