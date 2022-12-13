#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 1e6+10;
const int mod = 1e9+7;

ULL cnt;

struct Nood{
	int si;
} nood[N];



bool cmp(const Nood &a,const Nood &b)
{
	return a.si < b.si;
}

void get_divisors(int n)
{
	vector<int> res;
	for (int i = 1; i <= n / i; i ++ )
	{
		if (n % i == 0)
		{
			res.push_back(i);
			cnt ++ ;

			if (i != n / i)
			{
				res.push_back(n / i);
				cnt ++ ;
			}
		}
	}

	// sort(res.begin(), res.end());

	// for (auto ans : res) printf("%d ", ans);
	// puts("");
	// 
	printf("%lld\n", cnt % mod);

}

void solve()
{
	int n; scanf("%d", &n);
	ULL num, sum = 0;
	while (n -- )
	{
		scanf("%d", &num);
		sum *= num;
	}

	get_divisors(sum);
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
