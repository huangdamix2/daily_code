#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 250010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

vector<int> v;


void solve()
{
	int n; scanf("%d", &n);

	for (int i = 0; i < n; i ++ )
	{
		int num; scanf("%d", &num);
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	// for (int i = 0; i < n; i ++ ) printf("%d ", v[i]);

	int res = v[0];
	for (int i = 1; i < n; i ++ )
	{
		res = (res + v[i]) / 2;
	}

	printf("%d\n", res);

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