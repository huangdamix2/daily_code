#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

void solve()
{
	int n; scanf("%d", &n);
	string str; cin >> str;
	str = str.substr(0, n);

	int cnt = 0;

	bool ok = true;
	for (int i = 0; i < str.size(); i ++ )
	{
		if (str[i] == '-') cnt ++ ;
	}
	printf("%d\n", n - cnt);

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
