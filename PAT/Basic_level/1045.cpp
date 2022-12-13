#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
const int N = 100010;



void quick_sort(int q[], int l, int r)
{
	if (l >= r) return;

	int x = q[l], i = l - 1, j = r + 1;

	while(i < j)
	{
		do i ++ ; while (q[i] < x);
		do j -- ; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}

	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}

int main()
{
	int n; scanf("%d", &n);
	int a[N], b[N];

	for (int i = 0; i < n; i ++ ) scanf("%d", &a[i]), b[i] = a[i];

	// quick_sort(a, 0, n - 1);
	sort(a, a + n);


	int cnt[N];
	int m = 0, max = 0;
	for (int i = 0; i < n; i ++ )
	{
		if (a[i] == b[i] && b[i] > max) 
			cnt[m ++ ] = b[i];
		if (b[i] > max)
			max = b[i];
	}
	printf("%d\n", m);
	for (int i = 0; i < m; i ++ )
	{
		printf("%d", cnt[i]);
		if (i + 1 != m) printf(" ");
	}
	printf("\n");



	
	return 0;
}