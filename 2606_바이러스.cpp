#include <iostream>
#include <queue>
using namespace std;

int map[101][101];
bool visit[101];

int dy[4] = { 1,-1,0,0 };
int dx[4] = { 0,0,1,-1 };

int n, m;
bool navi(int y, int x)
{
	if (y >= 1 && y <= n && x >= 1 && x <= m) return true;
	return false;
}

int cnt;
void dfs(int now)
{
	visit[now] = true;
	cnt++;
	for (int i = 1; i <= n; i++)
	{
		if (!visit[i] && map[now][i])
			dfs(i);
	}

}
int y, x;
int main()
{
	cin >> n;
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> y >> x;
		map[y][x] = map[x][y] = 1;
	}
	dfs(1);
	cout << cnt - 1;
	return 0;
}