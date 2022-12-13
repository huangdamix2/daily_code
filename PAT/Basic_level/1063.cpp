#include <iostream>
#include <cmath>

using namespace std;

double ma;

int main()
{
	int t; scanf("%d", &t);

	while (t -- )
	{
		int a, b; scanf("%d%d", &a, &b);
		if (sqrt(a*a+b*b) > ma) ma = sqrt(a*a+b*b);
	}

	printf("%.2lf\n", ma);

	return 0;
}