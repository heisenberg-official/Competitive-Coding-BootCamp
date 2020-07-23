#include<iostream>
#include<vector>
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
    bool isAnagram(std::string s, std::string t)
    {
        std::map<char, int> x, z;

        if (!(s.size() == t.size()))
            return false;

        for (int i = 0; i < t.size(); i++)
        {
            x[t[i]] += 1;
            z[s[i]] += 1;
        }

        for (int u = 0; u < t.size(); u++)
            if (x[t[u]] != z[t[u]])
                return false;

        return true;
    }
};

int main()
{
    Solution X;
    std::cout<<X.isAnagram("aacc", "ccac");
    return 0;
}
