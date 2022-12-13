#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

bool check(int a, int b)
{
	return ((a*a - a*b - b*b) * (a*a - a*b - b*b)) == 1;
}

void solve()
{
	int a, b; scanf("%d%d", &a, &b);

	for (int i = b; i > 1; i -- )
		for (int j = i - 1; j >= 1; j -- )
			if (check(i, j))
			{
				LL res = i*i+j*j;
				printf("max( %d^2 + %d^2 ) = %lld\n", j, i, res);
				return;
			}


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
