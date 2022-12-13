#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

bool cmp(int a, int b)
{
	return a > b;
}

void solve()
{
	int a[N];
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++ ) scanf("%d", &a[i]);
	sort(a + 1, a + n + 1, cmp);
		
	int i = 1, j = 1;

	while (i <= n && a[j] > i)
	{
		j ++ ;
		i ++ ;
	}
	printf("%d\n", i);

}

int main()
{

	// int t; scanf("%d", &t);
	// while (t -- )
	// {
		solve();
	// }

}