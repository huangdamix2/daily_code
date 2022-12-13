#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


int main()
{
	int n, k; cin >> n >> k;
	int sum = 0;

	for (int i = 1; i <= n; i ++ ) 
		for (int j = 1; j <= n; j ++ )
			for (int z = 1; z <= n; z ++ )
				if ( (i+j)%k==0 && (j+z)%k == 0 && (i+z)%k==0 ) sum ++ ;

	cout << sum;

	return 0;
}