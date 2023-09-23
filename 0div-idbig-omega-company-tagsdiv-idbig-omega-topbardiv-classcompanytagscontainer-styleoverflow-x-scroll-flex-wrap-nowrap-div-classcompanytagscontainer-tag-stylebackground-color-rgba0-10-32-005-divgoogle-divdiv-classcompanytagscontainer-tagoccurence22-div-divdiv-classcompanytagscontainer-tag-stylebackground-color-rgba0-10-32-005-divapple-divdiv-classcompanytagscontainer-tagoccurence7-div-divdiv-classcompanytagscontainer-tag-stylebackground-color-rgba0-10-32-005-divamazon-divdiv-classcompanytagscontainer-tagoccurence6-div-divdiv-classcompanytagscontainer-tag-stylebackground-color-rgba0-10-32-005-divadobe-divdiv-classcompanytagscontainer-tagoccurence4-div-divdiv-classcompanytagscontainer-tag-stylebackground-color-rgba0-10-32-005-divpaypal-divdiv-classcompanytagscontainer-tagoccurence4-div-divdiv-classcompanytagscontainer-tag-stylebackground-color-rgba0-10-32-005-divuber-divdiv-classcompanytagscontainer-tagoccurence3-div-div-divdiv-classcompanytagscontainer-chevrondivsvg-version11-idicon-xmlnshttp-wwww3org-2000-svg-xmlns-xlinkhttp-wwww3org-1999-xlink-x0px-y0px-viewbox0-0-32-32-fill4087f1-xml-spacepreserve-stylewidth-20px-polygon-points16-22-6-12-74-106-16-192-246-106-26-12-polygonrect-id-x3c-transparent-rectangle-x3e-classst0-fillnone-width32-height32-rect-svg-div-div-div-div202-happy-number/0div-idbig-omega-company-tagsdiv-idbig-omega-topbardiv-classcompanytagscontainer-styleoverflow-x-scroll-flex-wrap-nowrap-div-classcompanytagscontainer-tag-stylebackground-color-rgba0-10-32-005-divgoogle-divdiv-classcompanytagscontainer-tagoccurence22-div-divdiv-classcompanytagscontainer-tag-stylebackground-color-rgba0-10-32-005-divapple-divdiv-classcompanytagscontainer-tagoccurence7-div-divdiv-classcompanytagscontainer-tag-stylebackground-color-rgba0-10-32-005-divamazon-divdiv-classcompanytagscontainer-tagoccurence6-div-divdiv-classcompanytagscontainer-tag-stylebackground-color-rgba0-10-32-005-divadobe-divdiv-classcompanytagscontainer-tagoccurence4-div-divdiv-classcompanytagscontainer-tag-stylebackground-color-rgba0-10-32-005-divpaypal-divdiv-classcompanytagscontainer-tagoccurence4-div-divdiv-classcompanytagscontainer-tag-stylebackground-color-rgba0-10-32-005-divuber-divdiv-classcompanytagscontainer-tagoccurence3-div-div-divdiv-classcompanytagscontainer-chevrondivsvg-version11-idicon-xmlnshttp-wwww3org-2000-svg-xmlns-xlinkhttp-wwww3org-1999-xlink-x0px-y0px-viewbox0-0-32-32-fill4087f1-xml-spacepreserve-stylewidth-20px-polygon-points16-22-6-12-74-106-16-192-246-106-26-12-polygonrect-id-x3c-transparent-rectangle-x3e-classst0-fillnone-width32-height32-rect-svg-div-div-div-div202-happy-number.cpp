// class Solution {
// public:
//     bool isHappy(int n) {
//         set<int> s;
//         int sum;
//         int temp;
//         while(1)
//         {
//             sum = 0;
//             while(n)
//             {
//                 temp = n%10;
//                 sum += temp*temp;
//                 n = n/10;
//             }

//             if(sum==1)
//             {
//                 return true;
//             }
//             else if(s.find(sum)!=s.end())
//             {
//                 return false;
//             }

//             s.insert(sum);
//             n = sum;
//         }
//         return false;
//     }
// };


class Solution {
public:
    bool isHappy(int n) {
        int counter = 7;
        int sum;
        int temp;
        while(counter)
        {
            sum = 0;
            while(n)
            {
                temp = n%10;
                sum += temp*temp;
                n = n/10;
            }

            if(sum==1)
            {
                return true;
            }
            n = sum;
            counter = counter - 1;
        }
        return false;
    }
};