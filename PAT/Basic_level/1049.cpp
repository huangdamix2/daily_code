#include <iostream>
#include <cstdio>

using namespace std;
const int N = 100010;

int main()
{
	int n; scanf("%d", &n);
	long double a, sum = 0;
	for (int i = 1; i <= n; i ++ ) cin >> a, sum += i * a * (n - i + 1);

	printf("%.2llf\n", sum);

		
	return 0;
}