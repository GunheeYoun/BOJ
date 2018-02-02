#include <iostream>

using namespace std; 

int table[1001][1001];
int visit[1001];
int N, M;
int c, r;
int cnt;

void dfs(int cur) {
	visit[cur] = true;						// 방문했음을 체크
	for (int i = 1; i <= N; i++) {
		if (!visit[i] && table[cur][i] == 1)		// 방문하지 않은 vertex이고 연결되어 있다면 
			dfs(i);			//수행
	}
}
int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> c >> r;
		table[c][r] = 1;
		table[r][c] = 1;
	}
	for (int i = 1; i <= N; i++)
	{
		if (!visit[i])
		{
			dfs(i);
			cnt++;
		}
	}
	
	cout << cnt;

	return 0;
}
