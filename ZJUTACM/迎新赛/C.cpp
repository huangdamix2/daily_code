#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;
const LD pi = 3.1415926535;

void solve()
{
	int n, r, v; scanf("%d%d%d", &n, &r, &v);
	double t = r / sin(pi/n) / v;
	printf("%.3lf\n", t);


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
