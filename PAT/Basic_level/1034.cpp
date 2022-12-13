#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
typedef long long LL;

LL gcd(LL a, LL b)
{
	return b?gcd(b,a%b):a;
}

void print(LL a, LL b)
{
	LL temp = gcd(a,b);
	LL flag = 1; // 保存正负

	if (a*1.0 / b < 0) flag = -1;
	a = a / temp, b = b / temp;
	a = abs(a), b = abs(b);
	LL s = a/b;
	a = a % b;
	if (flag == -1) printf("(");
	if (s > 0)
	{
		printf("%d", s * flag);
		if (a) printf(" %lld/%lld", a, b);
	}
	else
	{
		if (a) printf("%lld/%lld", a * flag, b);
		else printf("0");
	}
	if (flag == -1) printf(")");


}

int main()
{
	LL a, b, c, d, sum1, sum2;
	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
	sum1 = a * d + c * b; sum2 = b * d;
 	print(a,b); printf(" + "); print(c,d); printf(" = "); print(sum1, sum2); puts("");
	sum1 = a * d - c * b; sum2 = b * d;
 	print(a,b); printf(" - "); print(c,d); printf(" = "); print(sum1, sum2); puts("");
	sum1 = a * c, sum2 = b * d; 
 	print(a,b); printf(" * "); print(c,d); printf(" = "); print(sum1, sum2); puts("");
 	sum1 = a * d; sum2 = b * c;
 	print(a,b); printf(" / "); print(c,d); printf(" = ");	
 	if (sum2) print(sum1, sum2), puts("");
 	else printf("Inf");

	return 0;
}