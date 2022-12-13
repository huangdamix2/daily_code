#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;

void solve()
{
	bool vis[N] = {false};
	int a[N];
	int m, s; scanf("%d%d", &m, &s);

	for (int i = 1; i <= m; i ++ )
	{
		scanf("%d", &a[i]);
		vis[a[i]] = true;
	}

	for (int i = 1; s > 0; i ++ )
	{
		if (vis[i] == false)
		{
			// printf("---%d\n", i);
			s -= i;
			a[ ++ m] = i;
			// printf("-----%d\n", s);
		}
	}

	bool flag = true;
	sort(a+1, a+m+1);

	if (s != 0) flag = false;

	for (int i = 1; i <= m; i ++ )
		if (a[i] != i) flag = false;

	puts(flag ? "YES" : "NO");



}

int main()
{
	int t; scanf("%d", &t);

	while (t -- )
	{
		solve();
	}
	
	return 0;
}