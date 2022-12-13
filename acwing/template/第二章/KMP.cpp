#include <iostream>

using namespace std;

const int N = 100010, M = 1000010;

int n, m;
char p[N], s[M]; // 
int ne[N]; // next数组

int main()
{

	cin >> n >> p + 1 >> m >> s + 1; // 下标从1开始

	// 求next过程 从2开始 next1为0
	for(int i = 2, j = 0; i <= n; i ++ )
	{
		while (j && p[i] != p[j + 1]) j = ne[j];  // 不匹配就退而求其次
		if (p[i] == p[j + 1]) j ++ ;
		ne[i] = j;
	}

	// kmp 匹配成功
	for (int i = 1, j = 0; i <= m; i ++ )
	{
		while (j && s[i] != p[j + 1]) j = ne[j]; // j 总往前+1
		if (s[i] == p[j + 1]) j ++ ;
		if (j == n) // 匹配成功
		{
			printf("%d ", i - n);
			j = ne[j]; // 
		}
	}
	
	return 0;
}