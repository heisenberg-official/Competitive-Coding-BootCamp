class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int singleNumber(std::vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        
        if(nums.size()==1)
            return nums[0];
        
        if (nums[0] != nums[1])
            return nums[0];
        
        int x = 1, y = 1;
        bool flag = true;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (flag)
            {
                if (nums[i] == nums[i + 1])
                    x = 1;
                else
                    x = 0;
            }
            else
            {
                if (nums[i] == nums[i + 1])
                    y = 1;
                else
                    y = 0;

            }

            if (flag)
                flag = false;
            else
                flag = true;
            
            if (x == 0 && y == 0)
                return nums[i];
        }
        return 0;
    }
};
