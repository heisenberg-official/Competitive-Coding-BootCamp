#include"stdc++.h"

class Solution
{
public:
	Solution()
	{
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(0);
	}
	int fib(int N)
	{
		double phi = (1 - sqrt(5)) / 2;
		double Phi = (1 + sqrt(5)) / 2;
		return (pow(Phi, N) - pow(phi, N)) / sqrt(5);
	}
};

int main()
{
	Solution Fibo;
	std::cout << Fibo.fib(6);
	return 0;
}
