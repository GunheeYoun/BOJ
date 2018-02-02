#include <iostream>
using namespace std;

int arr1[101][101];
int arr2[101][101];
int ans[101][101];
int n, m, k;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr1[i][j];

	cin >> m >> k;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
			cin >> arr2[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			for (int t = 0; t < m; t++)
				ans[i][j] += (arr1[i][t] * arr2[t][j]);
		
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
			cout << ans[i][j] << " ";
		cout << "\n";
	}
	return 0;
}