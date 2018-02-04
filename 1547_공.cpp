#include <iostream>
using namespace std;

int n;
int a, b;
int arr[51];
int pos = 1;
int main()
{
	cin >> n;
	for (int i = 1; i <= 3; i++)
		arr[i] = i;
	while (n--)
	{
		cin >> a >> b;
		int tmp;
		tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp;
	}
	for (int i = 1; i <= 3; i++)
		if (arr[i] == 1)	cout << i;
	return 0;
}