#include <iostream>
#include <cstdio>

using namespace std;

const int N = 10010;

int main()
{
	double eps;
	double a[N] = {}, s[N] = {};
	cin >> eps;

	int i = 1;

	for (i = 1; i < N; i ++ )
	{
		a[i] = 1.0 / (i * (2 * i - 1)) ;
		s[i] = s[i - 1] + a[i];
		if (a[i] <= eps) break;
	}

	// cout << s[i];
	printf("%.6lf\n", s[i]);



	return 0;
}