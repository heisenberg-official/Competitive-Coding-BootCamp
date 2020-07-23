#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

class Solution
{
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }
    int firstUniqChar(std::string s)
    {
         if (s.empty())
            return -1;

        short int count = 0;
        std::map<char, int> u;

        for (short int i = 0; i < s.size(); i++)
            u[s[i]] += 1;
        for (short int i = 0; i < s.size(); i++)
        {
            if (u[s[i]] == 1)
                return i;
            count += (u[s[i]] > 1) ? 1 : 0;
        }

        if (count == s.size())
            return -1;

        return 0;
    }
};

int main()
{
    Solution X;
    std::cout<<"OUTPUT: " << X.firstUniqChar("AmJustASimpleTech");
    return 0;
}
