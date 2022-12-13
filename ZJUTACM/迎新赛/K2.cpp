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
	if (str.find('?') != string::npos)
	{
		for (int i = 0; i < str.size(); i ++ )
		{
			if (str[i] == '+') 
			{
				int j = i - 1;
				while (j >= 0 && str[j] == '?') j -- ;
				cnt += i - j;
			}
		}
	}
	else
	{
		for (int i = 0; i < str.size(); i ++ ) 
			if (str[i] == '+') cnt ++ ;
	}

	printf("%d\n", cnt);

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
