#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 100010, mod = 1e9+7;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;


void init()
{
	return;
}

void solve()
{
	int n; scanf("%d", &n);
	LL num;
	LL cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i ++ ) 
	{
		// scanf("%lld", &num);
		cin >> num;
		if (num % 3 == 1) cnt1 ++ ;
		if (num % 3 == 2) cnt2 ++ ;
	}

	LL cnt = abs(cnt1 - cnt2), ans;
	// printf(" -------- %lld\n", cnt);

	if (cnt1 == cnt2) printf("0\n");
	if (cnt1 > cnt2)
	{	
	 	// printf("%lld\n", cnt / 2 * 2 + cnt % 2);
	 	ans = cnt / 2 * 2 + cnt % 2;
	 	printf("%lld\n", ans % 3);
	}
	if (cnt2 > cnt1) 
	{
		// printf("%lld\n", cnt / 2 + cnt % 2 * 2 );
		ans = cnt / 2 + cnt % 2 * 2;
		printf("%lld\n", ans % 3);
	}
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