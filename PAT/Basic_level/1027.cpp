#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
	
	char si;
	int k, N; scanf("%d %c", &N, &si);

	for (int i = 1; ; i ++ )
	{
		if ((2*i*(2+i) + 1) > N) 
		{
			k = i - 1;
			break;
		}
	}
	// printf("%d\n", k); // 19 *   k = 2


	for (int i = k; i >= 0; i -- )
	{
		if (k - i > 0)
			for (int s = 0; s < k - i; s ++ ) cout << " ";

		for (int j = 0; j < (2 * i + 1); j ++ )
		{
			cout << si;
		}
		cout << endl;
	}

	for (int i = 1; i <= k; i ++ )
	{
		if (k - i > 0)
			for (int s = 0; s < k - i; s ++ ) cout << " ";
		for (int j = 0; j < (2 * i + 1); j ++ )
		{
			cout << si;
		}
		cout << endl;
	}
	printf("%d\n", N - (2*k*(2+k) + 1));

	return 0;
}