#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;
const int N = 100010;

int main()
{
	int i;
	int A[5] = {};
	int n, ac = 0, max = 0, A4 = 0;
	bool flag = false;
	scanf("%d", &n);
	while (n -- )
	{
		/*
		if (i % 5 == 0 && i % 2 == 0) A[0] += i;
		else if (i % 5 == 1) A[1] += pow(-1, ac ++ ) * i;
		else if (i % 5 == 2) A[2] ++ ;
		else if (i % 5 == 3) A[3] += i, A4 ++ ;
		else if (i % 5 == 4) if (i > max) max = i, A[4] = max;
		*/
		cin >> i;
		if (i % 5 == 0 && i % 2 == 0) A[0] += i;
		if (i % 5 == 1) A[1] += pow(-1, ac ++ ) * i, flag = true;
		if (i % 5 == 2) A[2] ++ ;
		if (i % 5 == 3) A[3] += i, A4 ++ ;
		if (i % 5 == 4) if (i > max) max = i, A[4] = max;
	}

	for (int i = 0; i < 5; i ++ )
	{
		// printf("%d", A[i]);
		if (A[i] != 0)
		{
			if (i == 3) printf("%.1f", (double)((A[i]*1.0) / A4 * 1.0)); 
			else printf("%d", A[i]);
			 
		}
		else if (i == 1 && flag) printf("%d", A[i]);
		else printf("N"); 

		if (i != 4) printf(" ");
	}

	// printf("%d %d %d %.1lf %d", A[0], A[1], A[2], (double)(A[3] * 1.0 / A4 * 1.0), A[4]);
	
	return 0;
}