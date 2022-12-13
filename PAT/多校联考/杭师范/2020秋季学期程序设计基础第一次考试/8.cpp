#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
const double pi = 3.14159;
const int N = 100010;

bool caseN(int a, int b , int c)
{
	return a + b <= c;
}
/*
海伦公式:三角形的面积的平方＝p(p-a)(p-b)(p-c) 其中p=1/2(a+b+c)
内切圆的r=2*三角形的面积/三角形的周长
内切圆的面积=π乘以r的平方
最终公式为
三角形内切圆面积=π(p-a)(p-b)(p-c)/p 其中p=1/2(a+b+c)
*/
int main()
{
	int n; scanf("%d", &n);
	double a[N], b[N], c[N];
	double p;
	double s;

	for (int i = 0; i < n; i ++ )
		cin >> a[i] >> b[i] >> c[i];


	for (int i = 0; i < n; i ++ )
	{
		if (caseN(a[i], b[i], c[i]) || caseN(b[i], c[i], a[i]) || caseN(c[i], a[i], b[i]))
		{
			printf("Oh my god!!\n");
			continue;
		}
		p = (a[i] + b[i] + c[i]) / 2;
		// double sABC = sqrt(p * (p - a[i]) * (p - b[i]) * (p - c[i]));
		s = pi * ((p - a[i]) * (p - b[i]) * (p - c[i])) / p;
		// s = pi * r;
		printf("%.2f\n", s);
	}	
	return 0;
	
}