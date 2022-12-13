#include <cstdio>

int main()
{
	int n, m, cnt = 0; scanf("%d %d", &n, &m);
	m -= 10;
	while (cnt * n < m) cnt ++ ;
	printf("%d\n", cnt);
	return 0;
}