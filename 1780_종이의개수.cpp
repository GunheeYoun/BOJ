#include <iostream>
using namespace std;

int map[2200][2200];
int n;
int cnt[3];

bool alltrue(int y, int x, int k, int val)
{

	int tmp = map[y][x];
	for (int i = y; i < y + k; i++)
		for (int j = x; j < x + k; j++)
			if (tmp != map[i][j]) return false;
	return true;
}


void divide(int y,int x, int k)
{
	if (k == 1)
		cnt[map[y][x] + 1]++;
	else if (alltrue(y, x, k, map[y][x]))
		cnt[map[y][x] + 1]++;
	else
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				divide(y + (k / 3)*i, x + (k / 3)*j, k / 3);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];
	divide(0, 0, n);
	cout << cnt[0] << "\n" << cnt[1] << "\n" << cnt[2];
	return 0;
}