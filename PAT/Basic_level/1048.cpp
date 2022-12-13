#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	char trans[14] = {"0123456789JQK"};

	string a, b, c;
	cin >> a >> b;
	int lena = a.length(), lenb = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	if (lena > lenb)
		b.append(lena - lenb, '0');
	else 
		a.append(lenb - lena, '0');

	for (int i = 0; i < a.length(); i ++ )
	{
		if (i % 2 == 0) c += trans[(a[i] - '0' + b[i] - '0') % 13];
		else
		{
			int temp = b[i] - a[i];
			if (temp < 0) temp += 10;
			c += trans[temp];
		}
	}

	for (int i = c.length() - 1; i >= 0; i -- ) cout << c[i];

	return 0;
}