#include <iostream>
using namespace std;

int n;
int arr[100001];
int main()
{
	cin >> n;
	long long total = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		total += arr[i];
	}

	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		total -= arr[i];
		sum += total*arr[i];
	}
	cout << sum;
}