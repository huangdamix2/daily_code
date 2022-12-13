#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 100010; M = N * 2;

int h[N], e[M], ne[M], idx; // h存头 e和ne和单链表一样

// 每个点只遍历一次, 深搜与宽搜用
bool st[N];

void add(int a, int b)
{
	e[idx] = b, ne[idx] = h[a], h[a] = idx ++ ;
}

/*
// 将x插到头节点
void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	idx ++ ;
}
*/

void dfs(int u) // 树和图的深度搜索
{
	st[u] = true; // 标记一下

	for (int i = h[u]; i != -1; i = ne[i]) // 从头结点开始搜,一条路走到黑
	{
		int j = e[i];
		if (!st[j]) dfs(j);
	}
}

int main()
{
	memset(h, -1, sizeof h); // 之前是头节点指向-1 现在有n个结点所以有n个-1
}