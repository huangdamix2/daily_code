#include <iostream>
#include <cstring>

using namespace std;

const int N = 510, M = 10010;
const int inf = 0x3f3f3f3f;
int n, m, k;
int dist[N], backup[N];

struct Edge
{
	int a, b, w;
} edges[M];

void bellman_ford()
{
	memset(dist, inf, sizeof dist);
	dist[1] = 0;

	for (int i = 0; i < k; i ++ )
	{
		memcpy(backup, dist, sizeof dist);
		for (int j = 0; j < m; j ++ )
		{
			int a = edges[j].a, b = edges[j].b, w = edges[j].w;
			dist[b] = min(dist[b], backup[a] + w);
		}
	}


}

int main()
{
	scanf("%d%d%d", &n, &m, &k);

	for (int i = 0; i < m; i ++ )
	{
		int a, b, w;
		scanf("%d%d%d", &a, &b, &w);
		edges[i] = {a, b, w};
	}

	bellman_ford();

	if (dist[n] > 0x3f3f3f3f / 2) printf("impossible");
	else printf("%d\n", dist[n]);

}