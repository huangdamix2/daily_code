#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

typedef long long LL;

int main()
{
	string a;
	cin >> a;
	LL cnt = 0, countp = 0, countt = 0;

	// int i = 0, j = 0, k = 0; // i找P j找A k找T

	for (LL i = 0; i < a.size(); i ++ )
		if (a[i] == 'T') countt ++ ;

	for (LL i = 0; i < a.size(); i ++ )
	{
		if (a[i] == 'T') countt -- ;
		if (a[i] == 'P') countp ++ ;
		if (a[i] == 'A') cnt = (cnt + (countp * countt) % 1000000007 ) % 1000000007;
	}
	/*
	while (i < a.size() - 2)
	{

	}
	
	// for (LL i = 0; i < a.size() - 2; i ++ )	
	LL i = 0;
	while (i < a.size() - 2)
	{

		if (a[i ++ ] == 'P')
		{
			for (LL j = i + 1; j < a.size() - 1; j ++ )
			{
				if (a[j] == 'A')
				{
					for (LL k = j + 1; k < a.size(); k ++ )
						if (a[k] == 'T') cnt %= 1000000007, cnt ++ , a = a.substr(i), i = 0, cout << a << endl;
				}

			}
		}

	}
	*/
	

	printf("%lld", cnt);

	return 0;	

}