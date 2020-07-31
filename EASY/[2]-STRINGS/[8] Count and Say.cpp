#include<iostream>
#include<string>

class Solution
{
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }
    std::string countAndSay(int n)
    {
        std::string X = "1";
        if (n == 0)
            return "";
        for (short int i = 1; i < n; i++)
        {
            short int count = 1;
            std::string Y = "";
            for (short int u = 1; u < X.length(); u++)
            {
                if (X[u] == X[u - 1])
                    count++;
                else
                {
                    Y.push_back(count + '0');
                    Y.push_back(X[u - 1]);
                    count = 1;
                }
            }
            Y.push_back(count + '0');
            Y.push_back(X[X.length() - 1]);
            X = Y;
        }
        return X;
    }
};

int main()
{
    Solution X;
    std::cout << X.countAndSay(4);
    return 0;
}
