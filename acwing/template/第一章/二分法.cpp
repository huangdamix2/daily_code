/*


// 区间[l, r]被划分为[l, mid]和[mid + 1, r]时使用：
int bsearch_1(int l, int r)
{
	while (l < r)
	{
		int mid = l + r >> 1;
		if (check(mid)) r = mid;	// check()判断mid是否满足性质
		else l = mid + 1;
	}
	return l;
}


// 区间[l, r]被划分成[l, mid - 1]和[mid, r]时使用：
int bsearch_2(int l, int r)
{
	while (l < r)
	{
		int mid = l + r + 1 >> 1;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	return l;
}

*/

/*
	1.先画图构思
	2.保证答案在区间内
*/



#include <iostream>

using namespace std;

int main()
{
	double x;
	cin >> x;

	double l = 0, r = x;
	while(r - l > 1e-8)
	{
		double mid = (l + r) / 2;
		if (mid * mid >= x) r = mid;
		else l = mid;
	}

	printf("%lf\n", l);

	return 0;
}