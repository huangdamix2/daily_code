#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;

const int N = 110;

int n, m;
int g[N][N]; // 存地图
int d[N][N]; // 每个点距离起点的距离
PII q[N * N]; // 手动模拟队列
// PII Prev[N][N]; // 可以用来记录上一个i


int bfs()
{

	int hh = 0, tt = 0;
	q[0] = {0, 0};

	memset(d, -1, sizeof d); // 初始化
	d[0][0] = 0;

	int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

	while (hh <= tt)
	{
		auto t= q[hh ++ ]; // 每次取出来队头

		for (int i = 0; i < 4; i ++ )
		{
			int x = t.first + dx[i], y = t.second + dy[i]; // 每次走的可能
			if (x >= 0 && x < n && y >= 0 && y < m /* 这个点还在范围内 */ && g[x][y] == 0 /* 这个点是空地 */&& d[x][y] == -1 /* 这个点没有走过 */)
			{
				d[x][y] = d[t.first][t.second] + 1;  // 第一次搜到这个点就记录一下
				// Prev[x][y] = t; // 记录x，y这个点从哪个点走过来
				q[ ++ tt] = {x, y}; // 把刚才这个距离加进队列
			}
		}
	}

	/* 记录路径
	int x = n - 1, y = m - 1;
	while (x || y)
	{
		cout << x << ' ' << y << endl;
		auto t = Prev[x][y];
		x = t.first, y = t.second;
	}
	*/

	return d[n - 1][m - 1];
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i ++ )
		for (int j = 0; j < n; j ++ )
			cin >> g[i][j];

	cout << bfs() << endl;

	return 0;
}