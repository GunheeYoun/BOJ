#include <iostream>
using namespace std;
int arr[1000001];
int main()
{
	for (int i = 1; i <= 1000000; i++)
		arr[i] = 987654321;
	for (int i = 1; i <= 1000000; i++)
	{
		int t = i;//245
		int make = i > 9 ? i : 0;
		while (t > 0)
		{
			make += t % 10;
			t = t > 9 ? t / 10 : 0;
		}
		//make=256
		//256의 생성자는 245
		arr[make] = arr[make] > i ? i : arr[make];
	}
	int n;
	cin >> n;
	cout << arr[n];
	return 0;
}