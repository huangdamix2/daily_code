#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

typedef unsigned long long ULL;
using namespace std;
const int N = 100010;

ULL func(ULL t)
{
	return t*t+2*t+3;
}

void solve()
{
	ULL t; cin >> t;

	cout << func(func(func(t)+t) + func(func(t))) * 1LL<< endl;

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