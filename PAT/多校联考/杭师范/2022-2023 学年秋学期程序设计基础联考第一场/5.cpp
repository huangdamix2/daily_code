#include <iostream>
#include <cstdio>

using namespace std;

typedef long long LL;

int main()
{
	char color;
	LL a, b, c, d;
	int e;

	cin >> color;
	cin >> a >> b >> c >> d;
	cin >> e;
	a %= 10;
	b %= 10;
	c %= 10;
	d %= 10;
	int res = (a * b * c * d) % 10;
	if (res == e && color == 'p') printf("hihihi,yaquyuebing,hihihi %d", res);
	else printf("meidechi,555 %d", res);



	return 0;
}