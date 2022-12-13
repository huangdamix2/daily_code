#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
const int N = 100010, mod = 1e9+7;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

int n;
double s;
priority_queue <double, vector<double>> rate1, rate2;


void init()
{
	scanf("%d%lf", &n, &s);
	double r;

	for (int i = 0; i < n; i ++ )
	{
		scanf("%lf", &r);
		rate1.push(r);
	}

	for (int i = 0; i < n; i ++ )
	{
		scanf("%lf", &r);
	 	rate2.push(r);
	}

	// auto r1 = rate1.top(), r2 = rate2.top();
	// cout << r1 << " " << r2;

}

void solve()
{
	double mid = s / n;
	auto r1 = rate1.top(), r2 = rate2.top();
	if (r1 >= 2.0 && r2 >= 2.0)
	{
		auto r = min(r1, r2);
		double res = mid * r - s;
		if (res > 0) printf("%.3lf\n", res);
		else printf("Gambler's Ruin\n");

	}
	else printf("Gambler's Ruin\n");

}

int main()
{
	// int t; scanf("%d", &t);

	// while (t -- )
	// {
	// 
	init();
	solve();
	// }

	return 0;
}