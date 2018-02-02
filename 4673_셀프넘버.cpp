#include <iostream>
using namespace std;

bool arr[10050];
int func(int n)
{
	if (arr[n] == true)
		return arr[n] = true;
	int tmp = n;
	do
	{
		n += tmp % 10;
	} while (tmp /= 10);
	arr[n] = true;
	return func(n);
}

int main()
{

	for (int i = 10000; i >=1; i--)
		func(i);
	for (int i = 1; i < 10000; i++)
		if (!arr[i])cout << i << endl;
	return 0;
}
