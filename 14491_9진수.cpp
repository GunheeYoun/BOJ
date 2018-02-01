#include <iostream>
using namespace std;
int n;
int main()
{
	cin >> n;
	int t = 0;
	int x = n;
	while (n > 8)
	{
		n = n / 9;
		t++;	
	} 
	for (int i = t; i > 0; i--)
	{
		int tmp = x;
		int k = 1;
		for (int j = i; j > 0; j--)
		{
			tmp /= 9;
			k *= 9;
		}
		cout << tmp;
		x -= tmp*k;
	}
	cout << x;
	return 0;
}
