#include <iostream>
#include <cstring>

using namespace std;

const int N = 200003, null = 0x3f3f3f3f; // 大于数量范围的最小质数
// 数组大小一般开到规定范围的2-3倍
// 设置为空的值需要超过数据范围

int h[N];

int find(int x)
{
	int k = (x % N + N) % N;

	while (h[k] != null && h[k] != x)
	{
		k ++ ;
		if (k == N) k = 0;
	}

	return k;
}

int main()
{
	int n;
	scanf("%d", &n);

	memset(h, 0x3f, sizeof h); // memset函数是按照字节来设置的，int占4个字节，0x3f就会被设置4次

	while (n -- )
	{
		char op[2];
		int x;
		scanf("%s%d", op, &x);

		int k = find(x);
		if (*op == 'I')	h[k] = x;
		else
		{
			if (h[k] != null) puts("Yes");
			else puts("No");
		}
	}

	return 0;
}