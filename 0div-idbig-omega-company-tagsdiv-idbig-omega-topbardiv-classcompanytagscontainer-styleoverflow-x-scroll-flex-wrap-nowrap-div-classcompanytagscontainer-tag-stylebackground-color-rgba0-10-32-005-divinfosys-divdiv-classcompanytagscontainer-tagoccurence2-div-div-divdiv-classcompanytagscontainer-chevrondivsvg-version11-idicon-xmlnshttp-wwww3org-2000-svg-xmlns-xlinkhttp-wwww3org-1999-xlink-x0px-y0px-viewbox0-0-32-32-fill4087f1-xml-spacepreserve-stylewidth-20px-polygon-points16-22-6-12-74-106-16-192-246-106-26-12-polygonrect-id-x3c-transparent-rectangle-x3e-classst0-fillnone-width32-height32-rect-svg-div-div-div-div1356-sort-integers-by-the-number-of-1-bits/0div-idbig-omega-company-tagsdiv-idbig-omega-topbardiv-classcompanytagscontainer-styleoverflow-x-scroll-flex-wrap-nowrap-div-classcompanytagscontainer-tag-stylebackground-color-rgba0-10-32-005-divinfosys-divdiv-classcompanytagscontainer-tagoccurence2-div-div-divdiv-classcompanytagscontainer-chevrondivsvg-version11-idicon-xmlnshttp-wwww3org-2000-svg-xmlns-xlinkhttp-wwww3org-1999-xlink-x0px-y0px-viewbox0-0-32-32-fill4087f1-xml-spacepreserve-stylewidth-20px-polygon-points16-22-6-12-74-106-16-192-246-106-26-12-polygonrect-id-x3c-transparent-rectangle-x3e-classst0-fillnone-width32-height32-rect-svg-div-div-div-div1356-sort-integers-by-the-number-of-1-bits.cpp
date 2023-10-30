class Solution {
public:
    static int findweight(int num)
    {
        int weight = 0;
        int mask = 1;
        while(num>0)
        {
            if((mask & num) > 0)
            {
                weight++;
                num ^= mask;
            }

            mask <<=1;
        }
        return weight;
    }

    static bool compare(int a, int b)
    {
        if(findweight(a) == findweight(b))
        {
            return a < b;
        }
        return findweight(a) < findweight(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};