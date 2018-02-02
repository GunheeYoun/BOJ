#include <iostream>
#include <queue>
using namespace std;

int map[101][101];
int chk[101][101];
int n, m;

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

bool navi(int y, int x)
{
	if (y>=1 && y<=n && x>=1 && x<=m) return true;
	return false;
}

struct que {
	int y;
	int x;
};
queue < que > q;

void bfs(int y, int x)
{
	chk[y][x] = 1;
	q.push({ y,x});
	que now;

	while (!q.empty())
	{
		now = q.front();
		
		int x1 = now.x;
		int y1 = now.y;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = now.x + dx[i];
			int ny = now.y + dy[i];
			
			if (navi(ny, nx)&&map[ny][nx]==1&&chk[ny][nx]==0)
			{
				chk[ny][nx] = chk[y1][x1] + 1;
				q.push({ ny, nx });
			}
		}
	}
	cout << chk[n][m];
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf_s("%1d", &map[i][j]);
	bfs(1, 1);

	return 0;
}