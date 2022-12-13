#include <map>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 250010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

// map<string, int> trans;

string password;

void solve()
{
	string rec;
	for (int i = 0; i < 4; i ++ )
	{
		cin >> rec;
		if (rec[2] == 'T') password += to_string(rec[0] - 'A' + 1);
	}
}

int main()
{

	int t; scanf("%d", &t);
	while (t -- )
	{
		solve();
	}

	cout << password << endl;

	return 0;
}