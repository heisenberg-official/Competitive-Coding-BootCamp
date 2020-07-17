#include<iostream>
#include<vector>
#include<algorithm>

class Solution
{
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2)
    {
        std::vector<int> temp;
        for (int i : nums1)
            for (int x = 0; x < nums2.size(); x++)
                if (i == nums2[x])
                {
                    temp.push_back(nums2[x]);
                    nums2.erase(nums2.begin() + x);
                    x = nums2.size() - 1;
                }
        return temp;
    }
};

int main()
{
    Solution A;
    std::vector<int> nums1{ 1,2,2,1 }, nums2{ 2,2 }, X=A.intersect(nums1, nums2);
    for (int i : X)
        std::cout<<" "<<i;

    return 0;
}
