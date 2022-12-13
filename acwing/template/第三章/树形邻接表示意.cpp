#include <iostream>
#include <cstring>
using namespace std;
typedef pair<int, int> PII;
const int N = 100010;

int n, m;
int h[N], e[N], ne[N], idx;
bool st[N];

void dfs(int u)
{
	st[u] = true;
	for (int i = h[u]; i != -1; i = ne[u])
	{
		int j = e[i];
		if (!st[j]) dfs(j);
	}
}

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx ++ ;
}

void solve()
{
	for (int i = 1; i <= n; i ++ )
	{
		printf("%d:", i);
		for (int j = h[i]; j != -1; j = ne[j])
		{
			printf("->%d", e[j]);
		}
		puts("");
	}
}

int main()
{

	// scanf("%d", &n);
	scanf("%d%d", &n, &m);
	memset(h, -1, sizeof h);
	for (int i = 0; i < m; i ++ )
	{
		int a, b; scanf("%d%d", &a, &b);
		add(a, b);
		// add(a, b), add(b, a);
	}

	solve();

	return 0;
}