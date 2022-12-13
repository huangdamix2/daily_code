#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 100010;
int d[N], w[N];

void solve()
{
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++ ) cin >> d[i];
	int idx = 0, ma = 0;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> w[i];
		if (w[i] > ma)
		{
			idx = i;
			ma = w[i];
		}
	}

	cout << d[idx] << endl;
	

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