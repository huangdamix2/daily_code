#include <map>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 2000010;

// map<int, int> mp;
LL a[N];

void solve()
{
	LL n; scanf("%lld", &n);
	LL sum = 0;
	LL num;
	for (LL i = 0; i < n; i ++ )
	{
		scanf("%lld", &num);
		

		sum += ( ++ a[num] ) - 1;


		// printf("%lld:%lld\n", num, a[num]);
	}
	printf("%lld\n", sum);

	/*
	for (int i = 0; i < n; i ++ )
	{
		int num; scanf("%d", &num);
		if (mp.find(num) != mp.end())
		{
		 	mp[num] ++ ;
		 	sum += mp[num] - 1;
		}
		else (mp.insert({num, 1}));
	}
	*/

	/*
	for (auto member : mp)
	{
		if (member.second == 1) continue;
		else
		{
			int en = member.second - 1;
			sum += (1 + en) * en / 2;
		}
	}
	*/


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
