#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 100010, M = 2 * N;

int n;
int h[N], e[M], ne[M], idx;

bool st[N];
int ans = N;

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx ++ ;
}

int dfs(int u)
{
	st[u] = true;


	int sum = 1, res = 0; // res 存储去掉一点后，每一块连通块的最大值
	for (int i = h[u]; i != -1; i = ne[i])
	{
		int j = e[i];
		if (!st[j]) 
		{
			int s = dfs(j); // 记录当前树的子树返回的结点的个数
			res = max(res, s); // 当前树的连通块数量与结果取最大值
			sum += s; // 从子树返回的数量应为当前树的一部分所以要想加
		}
	}
	res = max(res, n - sum);

	ans = min(ans, res);

	return sum;
}

void solve()
{

	dfs(1);
	cout << ans << endl;
}

int main()
{

	scanf("%d", &n);

	memset(h, -1, sizeof h);
	for (int i = 1; i < n; i ++ )
	{
		int a, b; scanf("%d%d", &a, &b);
		add(a, b), add(b, a);
	}

	solve();

	return 0;
}