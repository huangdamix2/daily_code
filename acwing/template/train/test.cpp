#include <iostream>
#include <cstdio>

typedef long long LL;
using namespace std;


int main()
{
	int t; scanf("%d", &t);
	while (t -- )
	{
		int n, q; scanf("%d%d",&n, &q);
		LL cntO = 0, cntE = 0, sum = 0;
		int x;
		for (int i = 0; i < n; i ++ )
		{
			scanf("%d", &x);
			if (x % 2 == 0) cntE ++ ;
			else cntO ++ ;
			sum += x;
		}

		while (q -- )
		{
			int op, x;
			scanf("%d%d", &op, &x);
			if (op == 0)
			{
				if (x % 2 == 0)
				{
					sum += cntE * x;
				}
				else
				{
					sum += cntE * x;
					cntO += cntE;
					cntE = 0;
				}
			}
			else
			{
				if (x % 2 == 0)
				{
					sum += cntO * x;
				}
				else
				{
					sum += cntO * x;
					cntE += cntO;
					cntO = 0;
				}		
			}
			printf("%lld\n", sum);
		}
	}
	return 0;
}