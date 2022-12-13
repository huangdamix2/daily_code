#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 250010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

bool isPrime(int num)
{
	if (num < 2) return false;
	for (int i = 2; i <= sqrt(num); i ++ )
		if (num % i == 0) return false;
	return true;
}

void solve()
{
	int num; scanf("%d", &num);
	if (isPrime(num)) printf("Yes\n");
	else printf("No\n");

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