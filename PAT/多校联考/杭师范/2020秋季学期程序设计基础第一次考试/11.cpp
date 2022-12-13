#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

typedef unsigned long long ULL;

ULL calcu(int x)
{
	return  pow(x, x);
}

int main()
{
	string color[7] = {"Red","Orange","Yellow","Green","Blue","Indigo","Purple"};
	int t, n; scanf("%d", &t);
	ULL sum[t + 10] = {};
	for (int i = 1; i <= t; i ++ ) 
	{
		scanf("%d", &n);
		for (int j = 1; j <= n; j ++ )
			sum[i] += calcu(j);
	}
	for (int i = 1; i <= t; i ++ )
	{
		cout << color[(sum[i] - 1) % 7];
		if (i != t) cout << endl;

	}
		//cout << color[sum[i] % 7] << endl;


	return 0;
}