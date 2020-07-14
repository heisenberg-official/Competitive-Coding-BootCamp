#include<algorithm>
#include<iostream>
#include<vector>

class Solution
{
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};

int main()
{
    Solution A;
    std::vector<int> x{ 0,0,1,1,1,2,2,3,3,4 };

    A.removeDuplicates(x);

    for (int i = 0; i < x.size(); i++)
        std::cout << "Vector Index[ "<< i <<" ] Value = "<< x[i] <<"\n";

    return 0;
}
