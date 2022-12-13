#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 100010;

void solve()
{
	long double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	if (x1 / y1 == x2 / y2) cout << 1;
	else if (x1 / y1 > x2 / y2) cout << x1 << " " << y1;
	else cout << x2 << " " << y2;

}

int main()
{
	int t; scanf("%d", &t);
	while (t -- )
	{
		solve();
		if (t != 0) puts("");
	}
	return 0;
}