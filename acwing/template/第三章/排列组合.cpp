#include <iostream>

using namespace std;
const int N = 10;

int n;
int path[N];
bool st[N]; // 开bool表示记录用过的数字，否则不记录

void dfs(int u)
{
	if (u == n) // 走到第n个位置
	{
		for (int i = 0; i < n; i ++ ) printf("%d ", path[i]);
		puts("");
		return;
	}
    /*
	for (int i = 1; i <= n; i ++ )
	{
	    if (!st[i])
	    {
			path[u] = i;
		    st[i] = true;
			dfs(u + 1);
			st[i] = false;
	    }
	}
	*/

	/**
	 * path用来存方案
	 */
	/*
	for (auto i : {0, 6})
	{
			path[u] = i;
			// st[i] = true;
			dfs(u + 1);
			// st[i] = false;
	}
	*/

}

int main()
{
	cin >> n;
	dfs(0);

	return 0;
}