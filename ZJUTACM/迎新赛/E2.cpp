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

void solve()
{
	LL l1, r1, l2, r2; scanf("%lld%lld%lld%lld", &l1, &r1, &l2, &r2);
	// printf("1\n");
	LL sum = 0;

	LL pubL = max(l1, l2), pubr = min(r1, r2);

	if (pubr >= pubL) sum += pubr - pubL + 1;

	for (LL i = l1; i <= r1; i ++ )
	{	
		// printf("2\n");
		LL size = 0, num = i;
		while (num)
		{
		 	num /= 2;
		 	// printf("%lld\n", num);
		 	size ++ ;
		}
		// printf("%d\n", size);
		// if (i == 1) continue;
		while (size != -1) 
		{
			// LL di = pow(2, size -- );
			LL di = 1LL << size -- ;
			// printf("%lld\n", di);
			LL num1 = i - di;
			// if (num1 == 1) continue;
			// if (i % num1 == 0) continue;
			if (num1 >= l2 && num1 <= r2) 
			{
				LL ex1 = num1^i, ex2 = i % num1;
				if (ex1 == ex2)
				{
					// printf("--%lld %lld\n", num1^i, i % num1);
					printf("%lld %lld\n", i, num1);
					sum ++ ;
				}
			}

		}

		// printf("\n");
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
