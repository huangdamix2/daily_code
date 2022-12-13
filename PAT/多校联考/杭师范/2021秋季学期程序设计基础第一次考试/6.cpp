#include <iostream>
#include <cstdio>

#include <cmath>
using namespace std;
const int N = 100010;

int main()
{
		
	int m, n, k; scanf("%d %d %d", &m, &n, &k);

	int light[N] = {}; // =0 off _ >0 on

	for (int i = 1; i <= n; i ++ )
	{
		if (i % 2 == 0)
		{
		 	light[i] = 1;
			if (2 * i <= m) light[2 * i] = 1;
		}
		else
		{
	 		light[i] = 1;
	 		if (i * i <= m) light[i * i] = 1;
		}
	}

	int num;
	for (int i = 1; i <= k; i ++ )
	{
		cin >> num;
		if (light[num]) printf("No\n");
		else printf("Yes\n");
	}

	return 0;

}


