#include <iostream>
using namespace std;

int n;
int a, b;
int cnt;

int main()
{
	cin >> n >> a >> b;
	
	bool chk = false;
	do {
		cnt++;
		if (a - b == 1 && a % 2 == 0)
		{
			cout << cnt << "\n";
			chk = true;
		}
		else if (b - a == 1 && b % 2 == 0)
		{
			cout << cnt << "\n";
			chk = true;
		}
		if (a % 2 == 1)
			a = a / 2 + 1;
		else
			a = a / 2;
		if (b % 2 == 1)
			b = b / 2 + 1;
		else
			b = b / 2;
		if (n % 2 == 1)
			n = n / 2 + 1;
		else
			n /= 2;
		
	} while (n!=1);
	if (chk == false)
		cout << -1 << "\n";
	return 0;
}