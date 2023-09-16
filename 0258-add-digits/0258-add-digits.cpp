class Solution {
public:
    int addDigits(int num) {
        if(num==0)
        {
            return 0;
        }
        if(num/10==0)
        {
            return num;
        }
        else
        {
            num = (num/10) + (num%10);
            return addDigits(num);
        }
        return 0;
    }
};