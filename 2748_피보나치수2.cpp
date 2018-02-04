#include <iostream>
using namespace std;

long long ans[91];

unsigned long long fibo(int n)
{
	if (ans[n] != -1)
		return ans[n];
	else if (n == 1)
		return ans[n] = 1;
	else
		return ans[n] = fibo(n - 1) + fibo(n - 2);
}
int main()
{
	for (int i = 1; i < 90; i++) ans[i] = -1;
	int n;
	cin >> n;
	if (n == 1)
		cout << 1;
	else
		cout << fibo(n - 1) + fibo(n - 2);
	return 0;
}