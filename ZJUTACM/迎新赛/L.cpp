#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 1010;
char g[N][N];

void solve()
{

	int n, m; scanf("%d%d", &n, &m);

	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= m; j ++ )
			cin >> g[i][j];
			// scanf("%s", &g[i][j]);
	// printf("1\n");
	int dx[10] = {-1, 0, 1, 1, 1, 0, -1, -1}, dy[10] = {1, 1, 1, 0, -1, -1, -1, 0};

	int cnt = 0;

	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= m; j ++ )
		{
			if (g[i][j] == '*') 
			{
				// printf("%d %d \n", i, j);
				continue;
			}
			for (int k = 0; k < 8; k ++ )
			{
				int x = i + dx[k], y = j + dy[k];
				if (x >= 1 && x <= n && y >= 1 && y <= m && g[x][y] == '*') cnt ++ ;
			}
		}

	printf("%d", cnt);


}

int main()
{
	// int t; scanf("%d", &t);

	// while (t -- )
	// {
		solve();
	// }

	return 0;

}
