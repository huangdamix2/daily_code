#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 1000010;

LL cnt;
bool st[N];
int primes[N];

void get_primes1(int n)
{
	// 埃氏筛法
	for (int i = 2; i <= n; i ++ )
	{
		if (!st[i])	
		{
			primes[cnt ++ ] = i;
			for (int j = i; j <= n; j += i) st[j] = true;
		}
	}
	printf("%lld\n", cnt);
}

void get_primes2(int n)
{
	// 线性筛法
	for (int i = 2; i <= n; i ++ )
	{
		if (!st[i]) primes[cnt ++ ] = i;
		for (int j = 0; primes[j] <= n/i; j ++ )
		{
			st[primes[j] * i] = true;
			if (i % primes[j] == 0) break;
		}
	}
	printf("%lld\n", cnt);
}

void solve()
{
	int num; scanf("%d", &num);
	// get_primes1(num);
	get_primes2(num);
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
