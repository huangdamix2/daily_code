#include <iostream>

using namespace std;

const int N = 100010;

int n, k;
int q[N];

int quict_sort(int l, int r, int k)
{
	if (l == r) return q[l]; // 此处>=与=性质相同, 快排中一定只能>=

	int x = q[l], i = l - 1, j = r + 1;
	while (i < j)
	{
		while (q[ ++ i] < x);
		while (q[ -- j] > x);
		if (i < j) swap(q[i], q[j]);
	}

	int sl = j - l + 1;
	
	if (k <= sl) return quict_sort(l, j, k);

	return quict_sort(j + 1, r, k - sl);
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i ++ ) cin >> q[i];

	cout << quict_sort(0, n - 1, k) << endl;

	return 0;
}