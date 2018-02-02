#include <iostream>
#include <string>
using namespace std;

int n;
bool arr[70][70];
string ans;

void div(int row, int col, int length)
{
	if (length == 1)
	{
		int tmp = arr[row][col];
		if (tmp == 0)
			ans.append("0");
		else
			ans.append("1");
		return;
	}

	bool chk = true;
	int tmp = arr[row][col];
	for (int i = row; i < row + length; i++)
	{
		for (int j = col; j < col + length; j++)
		{
			if (arr[i][j] != tmp)
			{
				chk = false;
				ans.append("(");
				div(row, col, length / 2);
				div(row, col + length / 2, length / 2);
				div(row + length / 2, col, length / 2);
				div(row + length / 2, col + length / 2, length / 2);
				ans.append(")");
				break;
			}
		}
		if (!chk) break;
	}
	if (chk)
	{
		if(tmp==0)
			ans.append("0");
		else 
			ans.append("1");
	}
	
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%1d", &arr[i][j]);
	}
	div(0, 0, n);
	cout << ans;
	cin >> n;
	return 0;
}