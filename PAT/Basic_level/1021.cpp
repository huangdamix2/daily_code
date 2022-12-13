#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

void qucikSort(vector<int> &q, int l, int r)
{
	if (l >= r) return;

	int x = q[l], i = l - 1, j = r + 1;

	while (i < j)
	{
		do i ++ ; while (q[i] < x);
		do j -- ; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}

	qucikSort(q, l, j);
	qucikSort(q, j + 1, r);
}

int main()
{
	string num; cin >> num;
	// vector<int> A;
	int cnt[10] = {};
	// for (int i = 0; i < num.size(); i ++ ) A.push_back(num[i] - '0');
	for (int i = 0; i < num.size(); i ++ ) cnt[num[i] - '0'] ++ ;

	// qucikSort(A, 0, A.size());

	// int cnt[10] = {};

	// for (int i = 0; i < A.size(); i ++ ) cnt[A[i]] ++ ;

	for (int i = 0; i < 10; i ++ )
		if (cnt[i] != 0) printf("%d:%d\n", i, cnt[i]);



	

	return 0;
}