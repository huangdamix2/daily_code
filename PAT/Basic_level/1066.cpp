#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 250010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;


void solve()
{
	int m, n;
	string a, b, k;
	cin >> m >> n >> a >> b >> k;

	while (a.size() < 3) a = '0' + a;
	while (b.size() < 3) b = '0' + b;
	while (k.size() < 3) k = '0' + k;

	string strArray[N];

	for (int i = 1; i <= n * m; i ++ )
	{
		string str; cin >> str;
		while (str.size() < 3) str = '0' + str;
		if (str <= b && str >= a) str = k;
		strArray[i] = str;
	}

	for (int i = 1; i <= n * m; i ++ ) 
	{
		cout << strArray[i];
		if (i % n == 0) printf("\n");
		else printf(" ");
	}

}

int main()
{

	// int t; scanf("%d", &t);
	// while (t -- )
	// {
		solve();
	// }

}