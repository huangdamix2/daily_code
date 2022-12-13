#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;


int a[N], st[N], stu[N];

void solve()
{
	int n, m; scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i ++ ) scanf("%d", &a[i]);
	for (int i = 0; i < m; i ++ ) scanf("%d", &st[i]);

	for (int i = 0; i < n; i ++ )
	{
		for (int j = 0; j < m; j ++ )
		{
			int num; scanf("%d", &num);
			if (num == st[j]) stu[i] += a[j];
		}
	}

	for (int i = 0; i < n; i ++ ) printf("%d\n", stu[i]);

}

int main()
{

	// int t; scanf("%d", &t);
	// while (t -- )
	// {
		solve();
	// }

}