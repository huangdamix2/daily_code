#include <map>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 110, mod = 1e9+7;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

struct Unit
{
	string name, s1, s2;
	double a, b;
	LL sum_price;
	double sum;
} unit[N];

map<string, double> rate;

bool cmp(Unit a, Unit b)
{
	return a.sum_price > b.sum_price;
}

void init()
{
	return;
}

void solve()
{
	int n; scanf("%d", &n);
	for (int i = 0 ; i < n; i ++ )
	{
		cin >> unit[i].name >> unit[i].s1 >> unit[i].a;
		cin >> unit[i].s2 >> unit[i].b;
		unit[i].sum = unit[i].a * unit[i].b;
	}

	int m; scanf("%d", &m);

	for (int i = 0; i < m; i ++ )
	{
		string name; cin >> name;
		double num; cin >> num;
		rate.insert({name, num});
	}

	for (int i = 0; i < n; i ++ )
	{
		unit[i].sum_price = unit[i].sum * rate[unit[i].s2] * 30;
		// cout << unit[i].sum_price << endl;
	}

	sort(unit, unit + n, cmp);

	cout << unit[0].name;




}

int main()
{
	// int t; scanf("%d", &t);

	// while (t -- )
	// {
		solve();
	// }

	return 0;
}