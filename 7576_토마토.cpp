#include <iostream>
#include <queue>
using namespace std;

int map[1001][1001];
int chk[1001][1001];

int dy[4] = { 1,-1,0,0 };
int dx[4] = { 0,0,1,-1 };

int m, n;
bool navi(int y, int x)
{
	if (y >= 1 && y <= n && x >= 1 && x <= m) return true;
	return false;
}


queue < pair<int, int>> q;

int maxtomato;
int answer;

int cnt;
void bfs()
{	
	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (navi(ny, nx) && map[ny][nx] == 0)
			{
				q.push(make_pair(ny,nx));
				chk[ny][nx] = chk[y][x] + 1;
				map[ny][nx] = 1;
				if (chk[ny][nx]>answer)answer = chk[ny][nx];
				cnt++;
			}
		}
	}
}

int main()
{
	cin >> m >> n;
	int start = 0;
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1)
			{
				q.push(make_pair(i, j));
				cnt++;
				maxtomato++;
				//chk[i][j] = 1;
			}
			if (map[i][j] == 0)
				maxtomato++;
		}
	bfs();
	if (maxtomato != cnt) cout << -1;
	else cout << answer;
	// >> n;
	return 0;
}