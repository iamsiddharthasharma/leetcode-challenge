class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double n = nums.size();
        // double avg = 0;
        // double mx = INT_MIN;
        // if(n==1 && k==1)
        // {
        //     return nums[0];
        // }
        // for(int j = 0;j<=n-k;j++)
        // {
        //     double sum = 0;
        //     for(int i = j;i<k+j;i++)
        //     {
        //         sum += nums[i];
        //     }
        //     avg = sum/k;
        //     mx = max(avg,mx);
        // }
        // return mx;
        double m=0, temp = 0;
        for(int i = 0;i<k;i++)
        {
            temp += nums[i];
            m = temp;
        }
        int start = 0;
        int end = k;
        while(end < n)
        {
            temp += nums[end];
            temp -= nums[start];
            start++;
            end++;
            if(m<temp)
            {
                m = temp;
            }
        }
        return m/k;
    }
};