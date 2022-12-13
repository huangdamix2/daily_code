#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 250010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

void divide(int x)
{
	for (int i = 2; i <= x / i; i ++ )
		if (x % i == 0)
		{
			int s = 0;
			while (x % i == 0) x /= i, s ++ ;
			printf("%d %d\n", i, s);
		}
	if (x > 1) printf("%d %d\n", x, 1);
	printf("\n");
}

void solve()
{
	int n; scanf("%d", &n);
	divide(n);

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