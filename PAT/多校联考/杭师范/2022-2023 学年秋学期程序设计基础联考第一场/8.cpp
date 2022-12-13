#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double fuc(double a3, double a2, double a1, double a0, double x)
{
	return ( a3*pow(x, 3) + a2*pow(x, 2) + a1*x + a0 );
}

int main()
{
	
	double a3, a2, a1, a0;
	double l, r, mid;

	cin >> a3 >> a2 >> a1 >> a0;
	cin >> l >> r;



	while (r - l > 0.00001)
	{
		mid = (l + r) / 2.0;
		double fmid = fuc(a3, a2, a1, a0, mid);
		double fa = fuc(a3, a2, a1, a0, l);
		double fb = fuc(a3, a2, a1, a0, r);
		if (fa * fb == 0)
		{
			if (fa == 0) printf("%.2lf\n", l);;
			if (fb == 0) printf("%.2lf\n", r);
			cout << endl;
			return 0;
		}


		if (fmid / fa >= 0) l = mid;
		else r = mid;
		if (fmid == 0) break;
	}
	printf("%.2lf\n", mid);



	return 0;
}