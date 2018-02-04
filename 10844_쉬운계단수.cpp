#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

long long dp[10][101];
int n;
long long func(int num, int len)
{
	if (len == n)
		return 1;
	long long& ret = dp[num][len];
	
	if (ret != -1) return ret;
	ret = 0;
	if (len == 0)
	{
		for (int i = 1; i < 10; i++)
		{
			ret += func(i, len + 1);
		}
	}
	else
	{
		if (num != 9)
			ret = (ret + func(num + 1, len + 1)) % 1000000000;
		if (num != 0)
			ret = (ret + func(num - 1, len + 1)) % 1000000000;
	}
	return ret % 1000000000;
}


int main()
{
	cin >> n;
	memset(dp, -1, sizeof(dp));
	cout << func(0, 0) % 1000000000;
	return 0;
}