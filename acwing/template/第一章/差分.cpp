#include <iostream>

using namespace std;

/*

	输入长度为n的整数序列
	接下来输入m个操作，每个操作包含三个整数l,r,c,表示将序列中[l, r]之间的每个数加上c
	请你输出进行完所有操作后的序列

	第一行包含两个整数n和m
	第二行包含n个整数，表示整数序列
	接下来m行，每行包含三个整数l,r,c表示一个操作

	共一行，包含n个整数，表示最终序列

*/

const int N = 100010;
void insert(int l, int r, int c)
{
	b[l] += c;
	b[r + 1] -= c;
}

int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++ ) scanf("%d", &a[i]);

	for (int i = 1; i <= n; i ++ ) insert(i, i, a[i]);

	while (m -- )
	{
		int l, r, c;
		scnaf("%d%d%d", &l, &r, &c);
		insert(l, r, c);
	}

	for (int i = 1; i <= n; i ++ ) b[i] += b[i - 1];
	for (int i = 1; i <= n; i ++ ) printf("%d ", b[i]);

	return 0;

}
