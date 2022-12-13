#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

void solve()
{
	int n1, n2; scanf("%d%d", &n1, &n2);
	printf("%d\n", gcd(n1, n2));
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
