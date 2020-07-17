#include<algorithm>
#include<iostream>
#include<vector>

class Solution
{
public:
    void rotate(std::vector<int>& nums, int k)
    {
        for (int i = 0; i < k; i++)
        {
            nums.insert(nums.begin(), nums[(int)nums.size()-1]);
            nums.erase(nums.end()-1);
        }
    }
};

int main()
{
    int K=3;
    Solution A;
    
    std::vector<int> X{ 1,2,3,4,5,6,7,8 };
    A.rotate(X,K);
    
    for(int i=0;i<X.size();i++)
        std::cout<<" "<< X[i];
    
    return 0;
}
