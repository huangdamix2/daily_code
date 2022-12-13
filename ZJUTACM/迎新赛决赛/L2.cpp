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
double rate1[N], rate2[N];
// priority_queue <double, vector<double>> rate1, rate2;

void lose()
{
	printf("Gambler's Ruin\n");
}

void init()
{
	scanf("%d%lf", &n, &s);
	double r;

	for (int i = 0; i < n; i ++ )
		scanf("%lf", &rate1[i]);

	for (int i = 0; i < n; i ++ )
		scanf("%lf", &rate2[i]);
	// auto r1 = rate1.top(), r2 = rate2.top();
	// cout << r1 << " " << r2;

}

void solve()
{
	double piece = s*1.0 / n / 2;
	cout << piece << endl;

	LD sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i ++ ) 
	{
		sum1 += piece * rate1[i];
		sum2 += piece * rate2[i];
	}

	cout << sum1 << " " << sum2 << endl;
	LD ans = min(sum1, sum2);
	cout << ans;


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