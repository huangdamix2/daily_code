#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

void quickSort(long long q[], int l, int r)
{
	if (l >= r) return;

	int x = q[l], i = l - 1, j = r + 1;

	while (i < j)
	{
		do i ++ ; while (q[i] < x);
		do j -- ; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}

	quickSort(q, l, j);
	quickSort(q, j + 1, r);

}

int main()
{
	
	int N;
	long long p; scanf("%d %lld", &N, &p);
	vector <int> num(N);
	// int min = 1000005, max = 0; 
	for (int i = 0; i < N; i ++ )
		cin >> num[i];

	// quickSort(num, 0, N - 1);
	sort(num.begin(), num.end());

	int temp = 0, res = 0;

	for (int i = 0; i < N; i ++ )
	{
		for (int j = i + res; j < N; j ++ )
		{
			if (num[j] <= num[i] * p)
			{
				temp = j - i + 1;
				if (temp > res)
					res = temp;
				else 
					break;
			}
		}
	}

	cout << res;

	return 0;
}