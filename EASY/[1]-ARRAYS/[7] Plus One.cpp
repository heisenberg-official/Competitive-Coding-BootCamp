#include<iostream>
#include<vector>

class Solution
{
public:
    std::vector<int> plusOne(std::vector<int>& digits)
    {
        if (digits.size() == 1 && digits[digits.size() - 1] == 9)
        {
            digits.insert(digits.begin(), 1);
            digits[digits.size() - 1] = 0;
        }
        else if (digits.size() > 1 && digits[digits.size() - 1] == 9)
        {
            for (short int i = digits.size() - 1; i >= 0; i--)
            {
                if (digits[i] == 9)
                {
                    digits[i] = 0;
                }
                else
                {
                    digits[i] += 1;
                    return digits;
                }
            }
            if (digits[0] == 0)
            {
                digits.insert(digits.begin(), 1);
                return digits;
            }
            return digits;
        }
        else
        {
            digits[digits.size() - 1] += 1;
            return digits;
        }
        return digits;
    }

};

int main()
{
    Solution A;
    std::vector<int> x{ 1,9,9,9};

    A.plusOne(x);

    for (int i:x)
    {
        std::cout <<" "<< i;
    }

    return 0;
}
