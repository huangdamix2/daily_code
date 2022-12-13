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
 * 问题3:如何合并两个集合:px 是x的集合编号,py是y的集合编号(合并操作)
 *
 * 问题2优化：路径压缩 
 */

int n, m;
int p[N]; // parent数组 存的是每个节点的父节点 此题每个结点都是自己
// 最核心的操作
int find(int x) // 返回x的祖宗结点 + 路径压缩
{

	if (p[x] != x) p[x] = find(p[x]);
	return p[x];
 
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i ++ ) p[i] = i;

	while (m -- )
	{
		char op[2]; // scanf缺点会读空格和回车，故用scanf读字符串就可以空格和回车
		int a, b;
		scanf("%s %d %d", op, &a, &b);

		if (op[0] == 'M') p[find(a)] = find(b);
		else
		{
			if (find(a) == find(b)) puts("Yes");
			else puts("No");
		}
	}
	
	return 0;
}
