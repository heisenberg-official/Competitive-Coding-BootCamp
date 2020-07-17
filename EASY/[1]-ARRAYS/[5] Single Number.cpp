#include<algorithm>
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
    
    int singleNumber(vector<int>& nums) 
    {
       int x = 0;
       for (int i:nums)
           x^= i;
        return x;
    }
};


int main()
{
    Solution A;
    std::vector<int> X{ 4,1,2,1,2 };
    
    std::cout << A.singleNumber(X);
    return 0;
}
