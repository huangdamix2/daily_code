#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n, m;
int h[N], size;

void down(int u)
{
	int t = u;
	if (u * 2 <= size && h[u * 2] < h[t]) t = u * 2;
	if (u * 2 + 1 <= size && h[u * 2 + 1] < h[t]) t = u * 2 + 1;
	if (u != t)
	{
		swap(h[u], h[t]);
		down(t);
	}
}

void up(int u)
{
	while (u / 2 && h[u / 2] > h[u])
	{
		swap(h[u / 2], h[u]);
		u /= 2;
	}
}

int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++ ) scanf("%d", &h[i]);
	size = n;

	for (int i = n / 2; i; i -- ) down(i);

	return 0;
}