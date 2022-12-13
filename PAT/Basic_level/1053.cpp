#include <iostream>
#include <cstring>

using namespace std;
const int N = 1010;
const int inf = 0x3f3f3f3f;

double e;
double n, d;

double prob_em = 0, ensure_em = 0;

void solve()
{
	int k; scanf("%d", &k);
	double volume;
	int cnt = 0;
	for (int i = 1; i <= k; i ++ )
	{
		cin >> volume;
		if (volume < e) cnt ++ ;
	}
	if (cnt > k / 2) prob_em += 1 ;
	if (cnt > k / 2 && k > d) prob_em -= 1 , ensure_em += 1;
	// if (cnt > d) prob_em -= 1 , ensure_em += 1 ;
	// printf("%d %d %d\n", prob_em, ensure_em, n);

}

int main()
{
	scanf("%lf%lf%lf", &n, &e, &d);
	int t = n;
	while (t -- )
	{
		solve();
	}

	printf("%.1lf", prob_em / n * 100.0);
	cout << '%';
	printf(" %.1lf", ensure_em / n * 100.0);
	cout << '%';

	return 0;
}