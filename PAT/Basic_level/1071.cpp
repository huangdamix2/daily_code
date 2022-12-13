#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 250010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

void win(int t, int T)
{
	printf("Win %d!  Total = %d.\n", t, T);
}

void lose(int t, int T)
{
	printf("Lose %d.  Total = %d.\n", t, T);
}

void notEnough(int T)
{
	printf("Not enough tokens.  Total = %d.\n", T);
}

void solve()
{
	int T, k; scanf("%d%d", &T ,&k);

	while (k -- )
	{

		if (T <= 0) 
		{
			printf("Game Over.\n");
			return;
		}

		int n1, n2, b, t; scanf("%d%d%d%d", &n1, &b, &t, &n2);

		if (t > T)
		{
			notEnough(T);
			continue;
		}

		if (n1 > n2)
		{
			if (b) T -= t, lose(t, T);
			else T += t, win(t, T);
		}
		else
		{
			if (b) T += t, win(t, T);
			else T -= t, lose(t, T);
		}


	}

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