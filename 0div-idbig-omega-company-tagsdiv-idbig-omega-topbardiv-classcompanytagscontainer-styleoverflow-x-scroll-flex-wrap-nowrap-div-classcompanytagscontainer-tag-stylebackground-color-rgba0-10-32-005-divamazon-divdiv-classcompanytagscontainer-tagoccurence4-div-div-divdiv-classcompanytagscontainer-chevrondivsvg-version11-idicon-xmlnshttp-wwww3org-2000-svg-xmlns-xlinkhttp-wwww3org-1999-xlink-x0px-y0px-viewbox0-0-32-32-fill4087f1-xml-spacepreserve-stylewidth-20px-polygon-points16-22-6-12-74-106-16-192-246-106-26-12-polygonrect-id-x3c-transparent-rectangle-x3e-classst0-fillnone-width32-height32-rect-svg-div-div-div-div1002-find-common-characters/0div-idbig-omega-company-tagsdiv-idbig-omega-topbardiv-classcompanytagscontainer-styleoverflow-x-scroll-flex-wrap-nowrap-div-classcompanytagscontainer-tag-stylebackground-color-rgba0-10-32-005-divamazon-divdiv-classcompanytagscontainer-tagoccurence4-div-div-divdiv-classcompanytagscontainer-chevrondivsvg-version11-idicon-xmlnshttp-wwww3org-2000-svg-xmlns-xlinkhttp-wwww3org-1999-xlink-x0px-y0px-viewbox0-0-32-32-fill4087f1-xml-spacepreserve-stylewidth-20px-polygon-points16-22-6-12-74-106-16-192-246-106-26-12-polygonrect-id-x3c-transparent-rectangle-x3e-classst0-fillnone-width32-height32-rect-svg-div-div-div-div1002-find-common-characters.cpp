class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> h1(26,0);
        vector<int> h2(26,0);
        for(char ch : words[0])
        {
            h1[ch - 'a']++;
        }  

        for(int i = 1;i<words.size(); i++)
        {
            for(char ch : words[i])
            {
                h2[ch - 'a']++;
            }

            for(int i = 0;i<26;i++)
            {
                h1[i] = min(h1[i], h2[i]);
                h2[i] = 0;
            }
        }

        vector<string> ans;
        for(int i = 0;i<26;i++)
        {
            if(h1[i]>0)
            {
                int count = h1[i];
                while(count--)
                {
                    char ch = i + 'a';
                    string s;
                    s = ch;
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
};