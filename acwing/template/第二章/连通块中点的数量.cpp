#include <iostream>

using namespace std;
const int N = 100010;

/**
 * 1.将两个集合合并
 * 2.询问两个元素是否在集合当中
 * belong[x] = a;
 * if(belong[x] == belong[y]) O(1)
 *
 * 近乎O(1)完成操作
 * 基本原理：每个集合用一颗树来表示。树根的编号就是正隔集合的编号。每个节点存储它的父节点，p[x]表示x的父节点
 *
 * 问题1:如何判断树根:if(p[x] == x)
 * 问题2:如何求x的集合编号:while(p[x] != x) x = p[x]; 复杂度和树的长度成正比
 * 问题3:如何合并两个集合:px 是x的集合编号,py是y的集合编号
 *
 * 问题2优化：路径压缩 
 */

int n, m;
int p[N], cnt[N]; // cnt表示每个集合的数量, 最开始每个集合只有1个点所以设初值为1
// 约定只有根结点的cnt有意义
// 最核心的操作
int find(int x) // 返回x的祖宗结点 + 路径压缩
{
	if (p[x] != x) p[x] = find(p[x]);
	return p[x];
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i ++ )
	{
	 	p[i] = i;
		cnt[i] = 1;
	}

	while (m -- )
	{
		string op;
		int a, b;
		cin >> op;
		if (op == "C")
		{
			cin >> a >> b;
			a = find(a), b = find(b);
			if (a != b)
			{
				p[a] = b;
				cnt[b] += cnt[a];
			}
		}
		else if (op == "Q1")
		{
			cin >> a >> b;	
			if (find(a) == find(b)) puts("Yes");
			else puts("No");
		}
		else
		{
			scanf("%d", &a);
			printf("%d\n", cnt[find(a)]);
		}
	}
	
	return 0;
}
