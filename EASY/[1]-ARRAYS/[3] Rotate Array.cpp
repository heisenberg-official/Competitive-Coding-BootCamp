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

