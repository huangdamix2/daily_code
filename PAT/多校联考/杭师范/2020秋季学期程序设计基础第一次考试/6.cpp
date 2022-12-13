#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i ++ )
		if (n % i == 0) return false;
	return true;
}

bool caseS(int sum1, int sum2)
{
	return sum1 > sum2;
}


int main()
{
	int n, m; scanf("%d %d", &n, &m);
	int sum1 = 0, sum2 = 0;
	int num;
	char flag;

	for (int i = 0; i < n; i ++ ) 
	{
		scanf("%d", &num); 
		if (isPrime(num)) num *= num;
		if (num % 2 == 0) num *= 2;
		if (num % 3 == 0) num *= 3;
		sum1 += num;
	}

	cin >> flag;

	for (int i = 0; i < m; i ++ ) 
	{
		scanf("%d", &num); 
		if (isPrime(num)) num *= num;
		if (num % 2 == 0) num *= 2;
		if (num % 3 == 0) num *= 3;
		sum2 += num;
	}

	cin >> flag;

	if (flag == 'N') caseS(sum1, sum2) ? printf("heiheihei!") : printf("yingyingying!");
	else caseS(sum2, sum1)? printf("heiheihei!") : printf("yingyingying!");





	return 0;
}