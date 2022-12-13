#include <iostream>

using namespace std;
const int N = 10;

int n;
char g[N][N]; // 记录
bool col[N], dg[N], udg[N]; // 列 正对角线 反对角线

void dfs(int u)
{
	if (u == n) // 说明找到一组方案
	{
		for (int i = 0; i < n; i ++ ) puts(g[i]);
			//if (g[i] == 'Q') 
				//printf("%d", i)
		puts("");
		return;
	}

	for (int i = 0; i < n; i ++ )
		if (!col[i] && !dg[u + i] && !udg[n - u + i]) // 这一列没放过 对角线没放过 反对角线也没放过
		{
			g[u][i] = 'Q';
			// printf("i:%d u:%d n:%d -- u+i=%d n-u+i=%d\n", i, u, n, u+i, n-u+i);
			col[i] = dg[u + i] = udg[n - u + i] = true;
			dfs(u + 1);
			col[i] = dg[u + i] = udg[n - u + i] = false;
			g[u][i] = '.';
		}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i ++ )
		for (int j = 0; j < n; j ++ )
			g[i][j] = '.';

	dfs(0);

	return 0;
}