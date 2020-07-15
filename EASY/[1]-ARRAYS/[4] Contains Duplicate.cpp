class Solution 
{
public:
    bool containsDuplicate(std::vector<int>& nums)
    {
        int x = nums.size(),y;
        sort(nums.begin(), nums.end());

        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        y = nums.size();
        if (x > y)
            return true;
        else
            return false;
    }
};

int main()
{
    bool Y;
    Solution A;
    
    std::vector<int> X{ 1,1,1,1,2,3,4,4,4,4,5,6,7,7,8 };
    Y = A.containsDuplicate(X);
    
    if(Y)
      std::cout<<"Contains Duplicate";
     else
      std::cout<<"No Duplicates";
    
    return 0;
}
