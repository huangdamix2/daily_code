#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef pair<int, int> PII;

void solve()
{
	double A, B, H; cin >> A >> B >> H;
	double a, b, h; cin >> a >> b >> h;
	// double V = A * B * H;
	if (a == A && B == b) 
	{
		printf("%.2ld\n", h + H);
		return;
	}
	if (h <= H)
	{
		double v = a * b * h;
		H += v / (A*B);
		printf("%.2lf\n", H);
	}
	else
	{
		double V = A * B * H;
		double s = A * B - a * b;
		double res = V / s;
		if (res > h)
		{
			h += (res - h) * s / (A*B);
			printf("%.2lf\n", h);
		}
		else printf("%.2lf\n", res);
	}
}

int main()
{
	int t; scanf("%d", &t);
	while (t -- )
	{
		solve();
	}
}
