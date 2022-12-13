#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;
const int N = 110;

int main()
{
	int n, m; scanf("%d %d", &n, &m);

	if (m > n) m -= n;

	int q[N];
	vector<int> a;

	for (int i = 0; i < n; i ++ ) scanf("%d", &q[i]); // 1 2 3 4 5 6

	for (int i = n - 1; i >= n - m; i -- ) a.push_back(q[i]);

	// for (int i = a.size() - 1; i >= 0; i -- ) printf("%d ", a[i]); // 5 6

	for (int i = n - m - 1; i >= 0; i -- ) q[i + m] = q[i];


	// for (int i = 0; i < n; i ++ ) printf("%d ", q[i]);
	
	for (int i = a.size() - 1, j = 0; i >= 0; i -- ) q[j ++ ] = a[i]; // 5 6

	for (int i = 0; i < n; i ++ )
	{
		printf("%d", q[i]);
		if (i + 1 != n) printf(" ");
	}

	return 0;
}