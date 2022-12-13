#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef pair<int, int> PII;
int path[N], cnt;

void solve()
{
	int n; scanf("%d" ,&n);
	for (int i = 0; i < n; i ++ ) scanf("%d", &path[i]);
	for (int i = 0; i < n; i ++ )
		for (int j = n - 1; j >= 1; j -- )
			if (path[j] < path[j - 1]) swap(path[j], path[j - 1]), cnt ++ ;
	printf("%d\n", cnt);
}

int main()
{
	// int t; scanf("%d", &t);
	// while (t -- )
	// {
		solve();
	// }
}