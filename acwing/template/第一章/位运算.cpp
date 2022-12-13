#include <iostream>

using namespace std;
const int N = 100010;

/* 
n的二进制表示中第k位是几
n = 15 = 1111B
         3210
1.把第k位移到最后一位n >> k
2看个位是几 x % 1

1 && 2 n >> k % 1
*/

/*

lowBit 操作
lowBit(x) : 返回的是x的最后一位1
x = 1010 lowBit(x) = 1


x & -x = x & (ResX + 1) Res表示取反

负数的补码是原码取反+1

x = 1010.... 1 00...0
ResX = 0101.... 0 11...1
ResX + 1 = 0101.... 1 00...0
x & (ResX + 1) = 00.....0 1 0....0

*/

// 计算2进制里1的个数

int lowbit(int x)
{
	return x & -x;
}

int main()
{
	int n;
	cin >> n;
	while (n -- )
	{
		int x;
		cin >> x;

		int res = 0;
		while (x) x -= lowbit(x), res ++ ; // 每次减去x的最后一位1

		cout << res << endl;
	}

	return 0;
}

