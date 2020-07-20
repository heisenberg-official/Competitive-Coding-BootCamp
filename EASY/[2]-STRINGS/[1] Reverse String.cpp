#include<iostream>
#include<vector>

class Solution 
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    void reverseString(vector<char>& s) 
    {
        reverse(s.begin(),s.end());
    }
};

int main()
{
  std::vector<vector<int>>{"h","e","l","l","o"};
  
  Solution A;
  A.reverseString(X);
  
  for(auto i:X)
    std::cout<<" "<<i<<" ";
  return 0;
}
