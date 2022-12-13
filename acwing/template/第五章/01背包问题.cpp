#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 1010;

int v[N], w[N], f2[N], f1[N][N];

// 二维原版
void solve1(int n, int m)
{
	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= m; j ++ )
		{

			// printf("i:%d j:%d w[i]:%d v[i]:%d\n", i, j, w[i], v[i]);

			if (j < v[i])
				f1[i][j] = f1[i - 1][j], printf("no\n");
			else 
				f1[i][j] = max(f1[i - 1][j], f1[i - 1][j - v[i]] + w[i]), printf("yes\n");

			// printf("%d\n\n", f[i][j]);
		}
	printf("%d\n", f1[n][m]);
}

// 一维优化
void solve2(int n, int m)
{
	for (int i = 1; i <= n; i ++ )
		for (int j = m; j >= 0; j -- )
		{
			if (j < v[i])
				f2[j] = f2[j];
			else
				f2[j] = max(f2[j], f2[j - v[i]] + w[i]);
		}
}

int main()
{
	//int t; scanf("%d", &t);

	// while (t -- )
	// {
	int n, m; scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++ ) scanf("%d%d", &v[i], &w[i]);
	
	// solve1(n, m);
	solve2(n, m);
	// }

	return 0;

}
