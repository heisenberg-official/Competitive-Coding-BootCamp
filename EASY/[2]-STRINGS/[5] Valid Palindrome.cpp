#include<iostream>
#include<vector>
#include<string>

class Solution
{
public:
    bool isPalindrome(std::string s)
    {
        std::vector<char> A;

        for (int i = 0; i < s.size(); i++)
            if (isalnum(s[i]))
                A.push_back(tolower(s[i]));

        for (int u = 0; u < A.size(); u++)
            if (A[u] != A[A.size() - 1 - u])
                return false;

        return true;
    }
};

int main()
{
    Solution A;
    std::cout<<A.isPalindrome("A man, a plan, a canal: Panama");
	return 0;
}
