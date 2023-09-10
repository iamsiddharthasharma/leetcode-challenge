class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
        {
            return true;
        }
        // for(long i = 0;i<=num/2;i++)
        // {
        //     if(i*i==num)
        //     {
        //         return true;
        //     }
        // }
        // return false;                8.05% solution (brute force)
        int s = 0;
        int e = num/2;
        while(s<=e)
        {
            long long mid = s + ((e-s)>>1);
            if(mid*mid==num) return true;
            else if(mid*mid > num) e = mid-1;
            else s = mid+1;
        }
        return false;
    }
};