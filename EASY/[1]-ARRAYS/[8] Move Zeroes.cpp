#include<iostream>
#include<vector>

class Solution 
{
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }
    void moveZeroes(std::vector<int>& nums)
    {
        short int zeros = std::count(nums.begin(), nums.end(), 0);
        nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
        nums.insert(nums.end(), zeros, 0);
    }
};

int main()
{
    Solution A;
    std::vector<int> x{0,1,1,0,0,1,0};

    A.moveZeroes(x);

    for (int i:x)
    {
        std::cout <<" "<< i;
    }
    
    return 0;
}
