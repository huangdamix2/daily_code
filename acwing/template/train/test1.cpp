#include <iostream>
using namespace std;

const int N = 100010;

int n;
int stk[N], tt;

int main()
{
	cin >> n;
	while (n -- )
	{
		int x; scanf("%d", &n);
		cin >> x;
		while (tt && stk[tt] >= x) tt -- ;
		if (tt) cout << stk[tt] << ' ';
		else cout << -1 << ' ';

		stk[ ++ tt] = x;
	}

	return 0;
}
