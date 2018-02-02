#include <iostream>
#include <queue>
using namespace std;

struct node {
	int z;
	int y;
	int x;
};
int map[101][101][101];
int chk[101][101][101];

int dz[6] = { 1,-1,0,0,0,0 };
int dy[6] = { 0,0,0,0,-1,1 };
int dx[6] = { 0,0,-1,1,0,0 };

int m, n, h;
bool navi(int z, int y, int x)
{
	if (y >= 1 && y <= n && x >= 1 && x <= m&&z >= 1 && z <= h) return true;
	return false;
}


queue < node > q;

int maxtomato;
int answer;

int cnt;
void bfs()
{
	while (!q.empty())
	{
		int z = q.front().z;
		int y = q.front().y;
		int x = q.front().x;
		q.pop();
		for (int i = 0; i < 6; i++)
		{
			int nz = z + dz[i];
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (navi(nz,ny, nx) && map[nz][ny][nx] == 0)
			{
				q.push({ nz,ny, nx });
				chk[nz][ny][nx] = chk[z][y][x] + 1;
				map[nz][ny][nx] = 1;
				cnt++;
				if (chk[nz][ny][nx]>answer)answer = chk[nz][ny][nx];
				
			}
		}
	}
}

int main()
{
	cin >> m >> n >> h;
	int start = 0;

	for (int k = 1; k <= h; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
			{
				cin >> map[k][i][j];
				if (map[k][i][j] == 1)
				{
					q.push({ k,i,j });
					cnt++;
					maxtomato++;
				}
				if (map[k][i][j] == 0)
					maxtomato++;
			}
	bfs();
	if (maxtomato != cnt) cout << -1;
	else cout << answer;
	// >> n;
	return 0;
}