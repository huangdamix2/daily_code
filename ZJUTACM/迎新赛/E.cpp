#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

void solve()
{
	LL l1, r1, l2, r2; scanf("%lld%lld%lld%lld", &l1, &r1, &l2, &r2);
	// LL span1 = r1 - l1 + 1, span2 = r2 - l2 + 1;

	// printf("%lld %lld\n", span1, span2);

	LL sum = 0;
	LL pubL = max(l1, l2), pubR = min(r1, r2);
	if (pubR >= pubL) sum += pubR - pubL + 1;


	if (span1 >= span2)
	{
		// sum += span2;
		LL st = (l2+1) / 2 * 2, ed = r2;
		for (LL i = st; i <= ed; i += 2)
		{
			LL num = i + 1;
			if (num >= l1 && num <= r1)
			{
				// printf("%lld %lld \n", i, num);
			 	sum ++ ;
			}
		}
	}
	else
	{
		// sum += span2;
		LL st = (l1+1) / 2 * 2, ed = r1;
		for (LL i = st; i <= ed; i += 2)
		{
			LL num = i + 1;
			if (num >= l2 && num <= r2) 
			{
				// printf("%lld %lld \n", i, num);
				sum ++ ;
			}
		}
	}

	printf("%lld\n", sum);

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
