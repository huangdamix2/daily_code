#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 1010;

int n, m;
int f[N][N], v[N], w[N];

void solve1()
{

	for (int i = 1; i <= n; i ++ )
		for (int j = 1; j <= m; j ++ )
		{
			for (int k = 0; k * v[i] <= j; k ++ )
				f[i][j] = max(f[i][j], f[i - 1][j - k * v[i]] + k * w[i]);
		}
	printf("%d\n", f[n][m]);
}

void solve2()
{
	// 在输入时直接进行优化
	for (int i = 1; i <= n; i ++ )
	{
		int v, w; scanf("%d%d", &v, &w);
		for (int j = 1; j <= m; j ++ )
			for (int k = 0; k * v <= j; k ++ )
				f[i][j] = max(f[i][j], f[i - 1][j - k * v] + k * w);
	}

	printf("%d\n", f[n][m]);
}

int main()
{
	// int t; scanf("%d", &t);

	// while (t -- )
	// {

	scanf("%d%d", &n, &m);

	/*
	// solve1
	for (int i = 1; i <= n; i ++ ) scanf("%d%d", &v[i], &w[i]);
	solve1();
	*/

	// solve2
	// solve2();
	
	



		// solve1();
	// }

	return 0;

}
