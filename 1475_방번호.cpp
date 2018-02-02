#include <iostream>
using namespace std;

int n;
int arr[10];
int main()
{

		cin >> n;
		int tmp = n;
		for (int i = 0; i < 10; i++)
			arr[i] = 0;
		do
		{
			arr[tmp % 10]++;
		} while (tmp /= 10);
		int ans = 0;
		for (int i = 0; i < 10; i++)
			if (arr[i]>ans)ans = arr[i];

		int k = arr[6] + arr[9];
		if (ans * 2 >= k)
		{
			bool chk = false;
			for (int i = 0; i < 9; i++)
			{
				if (i == 6) continue;
				if (arr[i] == ans)
				{
					chk = true;
					break;
				}
			}
			if (chk)
				cout << ans << endl;
			else
			{
				if (k % 2 == 1)
					cout << k / 2 + 1 << endl;
				else
					cout << k / 2 << endl;
			}

		}
		else
		{
			if (k % 2 == 1)
				cout << k / 2 + 1 << endl;
			else
				cout << k / 2 << endl;
		}

	return 0;
}