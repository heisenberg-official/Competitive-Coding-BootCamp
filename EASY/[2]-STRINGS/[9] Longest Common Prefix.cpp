#include<iostream>
#include<vector>

class Solution
{
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs)
    {
        char tmp; bool flag = true; std::string result = "";

        if (strs.size() == 0)
            return "";

        for (int i = 0; i < strs[0].length(); i++)
        {
            tmp = strs[0][i];
            for (int u = 1; u < strs.size(); u++)
                if (i >= strs[u].length() || strs[u][i] != strs[0][i])
                {
                    flag = false;
                    break;
                }

            if (flag)
                result += tmp;
            else
                break;
        }
        return result;
    }
};


int main()
{
    Solution A;
    std::vector<std::string> X{ "flower","flow","flight" };
    std::cout<<A.longestCommonPrefix(X);
	return 0;
}
