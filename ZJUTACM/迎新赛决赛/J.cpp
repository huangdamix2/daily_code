#include <map>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 100010, mod = 1e9+7;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<LL, int> PII;

map<LL, int> mp;

void init()
{
	return;
}

LL generate(LL seed, LL a, LL p)
{
	seed = (seed * seed + a) % p;
	return seed;
}

void solve()
{
	LL seed, a, p; cin >> seed >> a >> p;
	LL cnt = 0;
	while (1)
	{
		cnt ++ ;
		seed = generate(seed, a, p);
		if (mp.find(seed) != mp.end())
		{
			cout << cnt - mp[seed];
			break;
		}
		else mp.insert({seed, cnt});
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