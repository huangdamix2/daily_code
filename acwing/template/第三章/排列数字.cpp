#include <iostream>

using namespace std;
const int N = 100010;

int path[N];
int n, cnt = 0;
bool st[N];

void dfs(int u)
{
	if (n == u)
	{
		for (int i = 0; i < n; i ++ ) printf("%d ", path[i]);
		cnt ++ ;
		puts("");
		return;
	}

	for (int i = 1; i <= n; i ++ ) // 几个位置
	{
		if (!st[i])
		{
			path[u] = i;
			printf("path[u:%d] : %d\n", u, path[u]);
			st[i] = true;
			dfs(u + 1);
			st[i] = false;
		}
	}

}

int main()
{

	scanf("%d", &n);

	dfs(0);
	printf("%d\n", cnt);

	return 0;
}