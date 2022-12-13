#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

int st[N];


void solve()
{
	int n, k; scanf("%d%d", &n, &k);

	string str; cin >> str;
		//  for (int i = 1; i <= n; i ++ ) st[i] = str[i - 1] - '0';

	// printf("1\n");

	for (int i = 0; i < str.size(); i ++ )
	{

		if (!k) break;

		if (str[i] == '1') 
		{
			int j;
			if (i + 1 < str.size()) j = i + 1;
			else j = i;
			while (str[j] == '1' && j < str.size()) j ++ ;
			for (int k = i; k < j; k ++ ) str[k] = '0';
			i = j;
			k -- ;
		}

	}

	// printf("2\n");
	// for (int i = 1; i <= n; i ++ ) printf("%d", st[i]);
	cout << str;
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
