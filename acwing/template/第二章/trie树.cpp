#include <iostream>
#include <cstdio>
using namespace std;
const int N = 100010;
// cnt[N]   存放以该字母为结尾的单词有多少
int son[N][26], cnt[N], idx; // 下标是0的点，即使根节点，又是空结点
// Tire树的结点可以任意修改
void insert(char str[])
{
	int p = 0;
	for (int i = 0; str[i]; i ++ ) // str[i] c++ 字符串结尾是\0，故可以拿来判断是否为结尾
	{
		int u = str[i] - 'a';
		if (!son[p][u]) son[p][u] = ++ idx;
		p = son[p][u];
	}

	cnt[p] ++ ;
}

int query(char str[])
{
	int p = 0;
	for (int i = 0; str[i]; i ++ )
	{
		int u = str[i] - 'a';
		if (!son[p][u]) return 0;
		p = son[p][u];
	}

	return cnt[p];
}

int main()
{
	int n;
	scanf("%d", &n);
	while (n -- )
	{
		char op[2];
		scanf("%s%s", op, str);
		if (op[0] == 'I') insert(str);
		else printf("%d\n", query(str));
	}

	return 0;
}