#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 100010, mod = 21121;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

vector<PII> v;

void init()
{
	return;
}

void solve()
{
	int n, k; scanf("%d%d", &n, &k);

	for (int i = n; i >= 0; i -- )
	{
		int num; scanf("%d", &num);
		v.push_back({i, num});
	}
	/*
	// 系数 初值
	for (auto i : v)
		cout << i.first << " " << i.second << endl;
	*/

	for (auto iter = v.begin(); iter != v.end(); iter ++ )
	{
		for (int j = 0; j < k; j ++ )
		{
			iter->second = iter->second * iter->first % mod;
			iter->first -- ;
		}
	}

	vector<int> ans1, ans2;

	for (auto iter = v.begin(); iter != v.end(); iter ++ )
	{
		if (iter->second) ans1.push_back(iter->second);
		else ans2.push_back(iter->second);
	}

	for (auto i : ans2) printf("%d ", i);
	for (auto i : ans1) printf("%d ", i);

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