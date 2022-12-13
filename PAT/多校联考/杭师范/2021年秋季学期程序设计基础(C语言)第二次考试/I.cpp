#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef pair<int, int> PII;

int seg[N], s[N];
// bool a[N];
int a[N];
void solve()
{
	int n, m; scanf("%d%d", &n, &m);

	for (int i = 1; i <= n; i ++ ) cin >> seg[i];

	bool flag = true;
	for (int i = 1, j = 1; i <= m; i ++ )
	{
		if (flag) a[i] = 1;
		else a[i] = 0;
		if (i == seg[j])
		{
			// printf("--%d ", j);
			flag = !flag, j ++ ;
		}
	}

	for (int i = 1; i <= m; i ++ ) printf("%d ", a[i]);
	printf("\n");

	int res = 0;
	for (int i = 1, j = 1; i <= m; i ++ ) 
	{
		if (i == seg[j])
		{
			j ++ ;
			continue;
		}
		int cnt = 0;

		for (int i = 1; i <= m; i ++ ) printf("%d ", a[i]);
		printf("\n");
		for (int j = 1; j <= i; j ++ )
		{
			if(a[i]) cnt ++ ;
		}
		// printf("\n");
		for (int j = i + 1; j <= m; j ++ ) 
		{
			if (!a[i]) cnt ++ ;
		}
		res = max(res ,cnt);
	}

	printf("%d\n", res);
		
}

int main()
{
	// int t; scanf("%d", &t);
	// while (t -- )
	// {
		solve();
	// 
	// }
}