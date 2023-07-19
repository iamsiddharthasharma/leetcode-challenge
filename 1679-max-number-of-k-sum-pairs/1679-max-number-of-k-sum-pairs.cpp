class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        // int steps = 0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j = i+1;j<n;j++)
        //     {
        //         if((nums[j]+nums[i]==k) && (nums[i] && nums[j]!=0))
        //         {
        //             steps++;
        //             nums[j]=0;
        //             nums[i]=0;
        //         }
        //     }
        // }
        // return steps;
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = n-1;
        int count = 0;
        while(start<end)
        {
            if(nums[start]+nums[end]==k)
            {
                count++;
                start++;
                end--;
            }
            else if(nums[start]+nums[end]<k)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return count;
    }
};