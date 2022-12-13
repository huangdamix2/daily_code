#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cmath>

bool su(int n)
{
	for (int i = 2; i <= sqrt(n); i ++ )
		if (n % i == 0) return false;
	return true;
}

int main()
{
	int n, m; scanf("%d %d", &n, &m);
	int column = 0, cnt = 0;

	for (int i = 2; ; i ++ )
	{
		if (cnt == m) break;
		if (su(i))
		{
			cnt ++ ;
			// printf("%d\n", cnt);
			if (cnt >= n) 
			{
				printf("%d", i);
				// printf("%d\n", cnt);
				if (cnt == m) ;
				else if (column != 9) printf(" ");
				else printf("\n");
				column ++ ;
				column %= 10;
			}
		}
	}
	// printf("%d\n", m - n);

	return 0;
}