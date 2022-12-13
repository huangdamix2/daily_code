#include <iostream>
#include <cstring>


using namespace std;
char s1[2005], s2[2005];
int a[2005], b[2005], c[2005];


int main()
{
	int lna, lnb, lnc;
	scanf("%s", s1);
	scanf("%s", s2);

	lna = strlen(s1);
	lnb = strlen(s2);

	for (int i = 0; i < lna; i ++ ) a[lna - i] = s1[i] - '0';
	for (int i = 0; i < lnb; i ++ ) b[lnb - i] = s2[i] - '0';

	lnc = lna + lnb;

	for (int i = 1; i <= lna; i ++ )
	{
		for (int j = 1; j <= lnb; j ++ )
		{
			c[i + j - 1] += a[i] * b[j];
			c[i + j] += c[i + j - 1] / 10;
			c[i + j - 1] %= 10;
		}
	}

	if (c[lnc] == 0 && lnc > 0) lnc -- ;
	for (int i = lnc; i > 0; i -- )
		printf("%d", c[i]);

	return 0;

}