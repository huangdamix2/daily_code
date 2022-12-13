#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int N; scanf("%d", &N);

	int m, n, num;
	n = sqrt(N); m = N / m;

	vector<int> a;
	for (int i = 0; i < N; i ++ ) cin >> num, a.push_back(num);
	sort(a.begin(), a.end(), cmp);
	// for (int i = 0; i < N; i ++ ) cout << a[i] << " ";

	int dir = 0, x = 1, y = 1;
	int s[105][105] = {};

	for (int i = 0; i < N;i ++ )
	{
		s[y][x] = a[i];
		switch (dir)
		{
			case 0:
				x ++ ;
				if (x == n || s[y][x + 1] != 0)
					dir = (dir + 1) % 4;
				break;
			case 1:
				y ++ ;
				if (y == m || s[y + 1][x] != 0)
					dir = (dir + 1) % 4;
				break;
			case 2:
				x -- ;
				if (x == 1 || s[y][x - 1] != 0)
					dir = (dir + 1) %4;
				break;
			case 3:
				y -- ;
				if (y == 1 || s[y - 1][x] != 0)
					dir = (dir + 1) %4;
				break;
			default:
				continue;

		}

		for (int i = 1; i <= 105; i ++ )
		{
			for (int j = 1; j <= 105; j ++ )
				cout << s[i][j] << " ";
			cout << endl;
		}



	}


	return 0;
}