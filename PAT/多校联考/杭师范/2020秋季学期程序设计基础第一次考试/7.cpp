#include <iostream>
#include <cstdio>

typedef long long LL;
using namespace std;

int main()
{
	LL a, b, c, d, e, f;

	LL x0 = 0, x1 = 0, x2 = 0, x3 = 0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	x3 = a*c*e;
	x2 = a*d*e + b*c*e + a*c*f;
	x1 = b*d*e + a*d*f + b*c*f;
	x0 = b*d*f;

	printf("%lld %lld %lld %lld\n", x3, x2, x1, x0);


	
	return 0;
}