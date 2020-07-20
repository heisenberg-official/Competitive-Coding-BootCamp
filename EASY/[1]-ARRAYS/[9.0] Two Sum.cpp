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
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        for (short int i = 0; i < nums.size(); i++)
            for (short int j = i + 1; j < nums.size(); j++)
                if (nums[i] + nums[j] == target)
                {
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(j);
                    return nums;
                }
        return nums;
    }
};

int main()
{
    Solution A;
    std::vector<int> x{2,7,0,4,5,3};

    A.twoSum(x,9);

    for (short int i:x)
    {
        std::cout <<" "<< i;
    }
    return 0;
}
