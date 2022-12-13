#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 510;

int n, m;
int g[N][N]; // 用邻接矩阵写
int dist[N]; //用于存储每个点到起点的最短距离
bool st[N]; //用于在更新最短距离时 判断当前的点的最短距离是否确定 是否需要更新

int dijkstra()
{
	memset(dist, 0x3f, sizeof dist);
	dist[1] = 0; // 1好点初始化成0
	for (int i = 0; i < n; i ++ )
	{
		int t = -1; //将t设置为-1 因为Dijkstra算法适用于不存在负权边的图 
		for (int j = 1; j <= n; j ++ ) // 迭代n次
			if (!st[j] /*如果说当前结点未确定最短路*/ && (t == -1 || dist[t] > dist[j]/*当前的t不是最短的*/)) // 找到st为false时最短的路
			{
				t = j; //该步骤即寻找还未确定最短路的点中路径最短的点 
				printf("----%d\n", t);
			}

		st[t] = true; // 把t加到集合里取

		// if (t == n) break; // 提前找到最短距离可以break

		for (int j = 1; j <= n; j ++ ) // 用1~t的距离加上t~j的距离更行1~j的距离
		{
			printf("dist[j:%d] = %d ", j, dist[j]);
			printf("dist[t:%d]:%d + g[t:%d][j:%d]:%d = %d\n", t, dist[t], t, j, g[t][j], dist[t]+g[t][j]);
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		}
	}

	if (dist[n] == 0x3f3f3f3f) return -1; // n说明1和n不连通
	return dist[n]; // 否则返回最短
}

int main()
{
	scanf("%d%d", &n, &m);
	memset(g, 0x3f, sizeof g); // 初始化邻接矩阵
	while (m -- ) // 读入m条边
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		g[a][b] = min(g[a][b], c); // 保留长度最短的边
	}

	int t = dijkstra();
	printf("%d\n", t);
}