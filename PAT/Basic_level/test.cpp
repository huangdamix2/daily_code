#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

int lcm(int a, int b)
{
	return a / __gcd(a, b) * b;
}

void solve()
{
	cout << lcm(12 , 16);
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