/*

	前缀和：a1, a2, a3, ...... , aN, ......
		Si = a1 + a2 + ...... + aI
		1.如何求和:for i = 1; i <= n; i ++ 
		2.作用:s[i] = s[i - 1] + ai (快速求出原数组一段数的和)

*/




#include <iostream>

using namespace std;

const int N = 100010;

int n, m;
int a[N], s[N];

int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++ ) scanf("%d", a[i]);

	for (int i = 1; i <= n; i ++ ) s[i] = s[i - 1] + a[i];

	while (m -- )
	{
		int l, r;
		scanf("%d%d", &l, &r);
		printf("%d\n", s[r] - s[l - 1]);
	}

	return 0;
}