#include<iostream>
#include<algorithm>

class Solution 
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int strStr(string haystack, string needle) 
    {
        return haystack.find(needle);
    }
};

int main()
{
  Solution A;
  std::cout<<A.strStr("hello","ll");
  return 0;
}
