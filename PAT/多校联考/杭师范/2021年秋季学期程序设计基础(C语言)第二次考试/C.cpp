#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef pair<int, int> PII;
int path[4], idx;

void solve()
{
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i ++ )
		for (int j = 0; j < n; j ++ )
		{
			int num; scanf("%d", &num);
			if (!i) 
				if (!j || j == n - 1) path[idx ++ ] = num;
			if (i == n - 1)
				if (!j || j == n - 1) path[idx ++ ] = num;
		}

	for (int i = 0; i < 4; i ++ ) 
	{
		printf("%d", path[i]);
		if (i != 3) printf(" ");
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