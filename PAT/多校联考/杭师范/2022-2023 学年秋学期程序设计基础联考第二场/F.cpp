#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 1010;

int map[N][N];
int n, m, k;

void solve()
{
	int x; scanf("%d", &x);
	// for (int i = 1, j = 1; i <= m; i ++ ) printf("%d ", map[x][i]);
		// puts("");
	int cnt[N], res = 0, num = 0;
	for (int i = 1, j = 1; i <= m; i ++ )
	{
		cnt[map[x][i]] ++ ;
		while (j < i && cnt[map[x][i]] > 1) cnt[map[x][j ++ ]] -- ;
		if (res > (i - j))
		{
			num = map[x][i];
			res = i - j;
		}
		// res = max(res, i - j);
	}
	cout << num << endl;
}

int main()
{
	 scanf("%d%d%d", &n, &m, &k);

	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= m; j ++ )
			cin >> map[i][j];

	int t; scanf("%d", &t);
	while (t -- )
	{
		solve();
		// if (t) puts("");
	}
	return 0;
}