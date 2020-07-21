#include<iostream>

class Solution 
{
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }
    int reverse(int x)
    {
        int u = 0; bool negative = false;
        
        if(x >= INT_MAX || x <= INT_MIN)
            return 0;
        
        if (x < 0)
        {
            negative = true;
            x *= -1;
        }

        while (x > 0)
        {
            if(u > INT_MAX/10 || u < INT_MIN/10)
                return 0;
            u = u * 10 + x % 10;
            x /= 10;
        }
        
        if (negative)
            return u*=-1;
        else
            return u;
    }
};

int main()
{
  Solution A;
  std::cout<<A.reverse(12345); // Reverse Both Negative And Positive Number
  return 0;
}
