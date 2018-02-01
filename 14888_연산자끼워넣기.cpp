#include <iostream>
using namespace std;
int n, a, b, c, d;
int minNum=987654321+987654321, maxNum=-987654321-987654321;
int arr[101];
void func(int num, int plus, int minus, int multi, int divi,int ans)
{
	if (plus==0&&minus==0&&multi==0&&divi==0)
	{
		minNum = minNum > ans ? ans : minNum;
		maxNum = maxNum < ans ? ans : maxNum;
		return;
	}
	if (plus > 0)
		func(num + 1, plus - 1, minus, multi, divi, ans + arr[num + 1]);
	if (minus > 0)
		func(num + 1, plus, minus - 1, multi, divi, ans - arr[num + 1]);
	if (multi > 0)
		func(num + 1, plus, minus, multi - 1, divi, ans * arr[num + 1]);
	if (divi > 0)
		func(num + 1, plus, minus, multi, divi - 1, ans / arr[num + 1]);
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> a >> b >> c >> d;
	func(0, a, b, c, d, arr[0]);
	cout << maxNum << "\n" << minNum;
	return 0;
}