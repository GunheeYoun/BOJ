#include <iostream>
using namespace std;

int cnt = 1;
int len = 64;
int minlen = 64;
int x;
int main()
{
	cin >> x;
	while(len>x)
	{
		len - minlen + minlen / 2 >= x ? len = len - minlen / 2 : cnt++;
		minlen /= 2;
	}
	cout << cnt;
	return 0;
}