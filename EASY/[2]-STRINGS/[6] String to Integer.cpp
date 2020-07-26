#include<iostream>
#include<sstream>

class Solution
{
public:
    int myAtoi(std::string str)
    {
        stringstream A(str);
        int X=0; A>>X;
        return X;
    }
};

int main()
{
  Solution A;
  std::cout<<A.myAtoi("words - and 987");
  return 0;
}
