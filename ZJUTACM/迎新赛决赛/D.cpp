#include <queue>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 100010, mod = 1e9+7, inf = 0x3f3f3f3f;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

int n, m, a, b; 
int h[N], w[N], e[N], ne[N], idx;
int dist[N];
bool st[N];

void init()
{
	memset(h, -1, sizeof h);
	memset(dist, inf, sizeof dist);
}

void add(int a, int b, int c)
{
	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
}

int spfa()
{
	dist[1] = 0;

	queue<int> q;
	q.push(a);
	st[a] = true;

	while (q.size())
	{
		auto t = q.front(); q.pop();

		st[a] = false;

		for (int i = h[t]; i != -1; i = ne[i])
		{
			LL j = e[i];
			if (dist[j] > dist[t] + w[i])
			{
				dist[j] = dist[j] + w[i];
				if (!st[i]) 
				{
					q.push(j);
					st[j] = true;
				}
			}
		}

	}

	return dist[b - a];


}

void solve()
{
	scanf("%d%d%d%d", &n, &m, &a, &b);

	init();

	for (int i = 0; i < m; i ++ )
	{
		int u, v, w; scanf("%d%d%d", &u, &v, &w);
		add(u, v, w), add(v, u, w);
	}
	for (int j = 1; j <= n; j ++ )
	{
		printf("%d->", j);
		for (int i = h[j]; i != -1; i = ne[i])
		{
			printf("%d->", e[i]);
		}
		printf("\n");
	}


	// int dist1 = spfa();

	// printf("%lld\n", dist1);
	// for (int i = 0; dist[i] != 0; i ++ ) printf("%d ", dist[i]);


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