#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;
const int N = 100010;

bool su(int n)
{
	for (int i = 2; i <= sqrt(n); i ++ )
		if (n % i == 0) return false;
	return true;
}

int main()
{
	
	int n; scanf("%d", &n);
	int cnt = 0;
	vector<int> p, d;

	for (int i = 2; i <= n; i ++ )
		if (su(i)) p.push_back(i);

	for (int i = p.size() - 2; i >= 0; i -- ) d.push_back(p[i + 1] - p[i]);

	// for (int i = p.size() - 1; i >= 0; i -- ) printf("%d ", p[i]);
	for (int i = d.size() - 1; i >= 0; i -- ) if (d[i] == 2) cnt ++ ;

	printf("%d", cnt);
	return 0;
}