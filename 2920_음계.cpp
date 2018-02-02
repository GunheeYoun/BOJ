#include <iostream>
using namespace std;

int arr[9];

int main()
{
	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	int chk = 0;
	if (arr[0] < arr[1])
		chk = 1;
	else
		chk = 2;
	int tmp;
	if (chk == 1)
		tmp = -1;
	else
		tmp = 1;
	for (int i = 0; i < 7; i++)
	{
		if (!(tmp == arr[i] - arr[i + 1]))
		{
			chk = 3;
			break;
		}

	}
	if (chk == 1)
		cout << "ascending";
	else if (chk == 2)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}