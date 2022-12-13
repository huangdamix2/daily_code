#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;

void solve()
{
	int l, r, x; scanf("%d%d%d", &l, &r, &x);
	int a, b; scanf("%d%d", &a, &b);
	if (a == b)	
		printf("0\n");
	else if ( abs(a - b) >= x )
		printf("1\n");
	else if ( abs(a - l) >= x && abs(b - l) >= x )
		printf("2\n");
	else if ( abs(a - r) >= x && abs(b - r) >= x )
		printf("2\n");
	else if ( (abs(a - r) >= x || abs(a - l) >= x) && (abs(b - r) >= x || abs(b - l) >= x) )
		printf("3\n");
	else 
		printf("-1\n");

}

int main()
{
	int t; scanf("%d", &t);

	while (t -- )
	{
		solve();
	}
	
	return 0;
}