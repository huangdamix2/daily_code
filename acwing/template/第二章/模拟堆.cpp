#include <iostream>

using namespace std;

int h[N], ph[N], hp[N] size;

void heap_swap(int a, int b) 
{
	swap(ph[hp[a]], ph[hp[b]]);
	swap(hp[a], hp[b]);
	swap(h[a], h[b]);
}

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
	int n;
	scanf("%d", &n);
	while(n -- )
	{
		char op[10];
		scanf("%s", op);
		if (!strcmp(op, 'I'))
		{
			scanf("%d", &x);
			size ++ ;
			m ++ ;
			ph[m] = size, hp[size] = m;
			h[size] = x;
			up(size);
		}
		else if (!strcmp())

	}
}