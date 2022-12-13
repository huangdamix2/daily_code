#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 1010;

int path[N][N];

bool check(int ans, int res)
{
	return ans != res;
}

void solve()
{

	for (int i = 1; i <= 3; i ++ )
		for (int j = 1; j <= 3; j ++ )
			cin >> path[i][j];

	int ans = 0;
	for (int i = 1; i <= 3; i ++ ) ans += path[i][1];

	int res = 0;
	for (int i = 1; i <= 3; i ++ ) res += path[i][2];
	if (check(ans, res))
	{
		printf("NO");
		return;
	}

	res = 0;
	for (int i = 1; i <= 3; i ++ ) res += path[i][3];
	if (check(ans, res))
	{
		printf("NO");
		return;
	}

	res = 0;
	for (int i = 1; i <= 3; i ++ ) res += path[1][i];
	if (check(ans, res))
	{
		printf("NO\n");
		return;
	}

	res = 0;
	for (int i = 1; i <= 3; i ++ ) res += path[2][i];
	if (check(ans, res))
	{
		printf("NO");
		return;
	}

	res = 0;
	for (int i = 1; i <= 3; i ++ ) res += path[3][i];
	if (check(ans, res))
	{
		printf("NO");
		return;
	}

	res = 0;
	for (int i = 1; i <= 3; i ++ ) res += path[i][i];
	if (check(ans, res))
	{
		printf("NO");
		return;
	}

	res = 0;
	for (int i = 3; i >= 1; i -- ) res += path[1][i];
	if (check(ans, res))
	{
		printf("NO");
		return;
	}

	printf("YES");

}

int main()
{
	int t; scanf("%d", &t);
	while (t -- )
	{
		solve();
		if (t) printf("\n");
	}
	return 0;
}