#include <cstring>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
const int N = 1010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

set<string> record;

bool check(string &str)
{
	if (record.find(str) != record.end()) return true;
	else return false;
}

void solve()
{
	int m ,n, s; cin >> m >> n >> s;
	string candidate[N];

	for (int i = 1; i <= m; i ++ ) cin >> candidate[i];

	// puts("");
	bool ok = false;

	for (int i = s; i <= m; i += n)
	{
		ok = true;

		if (check(candidate[i]))
		{
			i ++ ;
			while (check(candidate[i]) && i <= m) i ++ ;
			// printf("%d\n", i);
			// record.insert(candidate[i]);
		}

		record.insert(candidate[i]);
		cout << candidate[i] << endl;

	}

	if (!ok) printf("Keep going...\n");




}

int main()
{

	// int t; scanf("%d", &t);
	// while (t -- )
	// {
		solve();
	// }

}