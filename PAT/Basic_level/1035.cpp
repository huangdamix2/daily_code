#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a(105, 0), b(105, 0), s;
int n, flag;

void insertSort()
{
	int i, j, temp;
	for (i = 1; i < n; i ++ )
	{
		temp = a[i];
		for (j = i; j && a[j - 1] > temp; j -- ) a[j] = a[j - 1];
		a[j] = temp;
		if (a == b)
		{
			flag = 1;
			break;
		}
	}


	if (flag)
	{
		i ++ ;
		temp = b[i];
		for (j = i; j && b[j - 1] > temp; j -- ) b[j] = b[j - 1];
		b[j] = temp;
	}


}

void mergeSort()
{
	int i;
	for (i = 2; i <= n; i *= 2)
	{
		for (int j = 0; i + j < n; j = j + i) sort(s.begin() + j, s.begin() + i + j);
		if (n % i) sort(s.begin() + n / i * i, s.begin() + n);
		if (s == b) break;
	}
	i *= 2;
	for (int j = 0; i + j < n; j = j + i) sort(b.begin() + j, b.begin() + i + j);
	if (n % i) sort(b.begin() + n / i * i, b.begin() + n);

}

int main()
{
	
	scanf("%d", &n);
	for (int i = 0; i < n; i ++ ) scanf("%d", &a[i]);
	for (int i = 0; i < n; i ++ ) scanf("%d", &b[i]);
	s = a;

	insertSort();

	if (flag) cout << "Insertion Sort" << endl;
	else cout << "Merge Sort" << endl, mergeSort();

	for (int i = 0; i < n; i ++ )
	{
		cout << b[i];
		if (i + 1 != n) cout << " ";
	}


	// mergeSort(q1, 0, n - 1);

	return 0;
}