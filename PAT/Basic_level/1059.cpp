#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <cmath>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, bool> PII;

map<string, PII> mp;

bool isPrime(int num)
{
	if (num == 2) return true;
	for (int i = 2; i <= sqrt(num); i ++ )
		if (num % i == 0) return false;
	return true;
}

void solve()
{
	int n; scanf("%d", &n);

	for (int i = 1; i <= n; i ++ )
	{
		string str; cin >> str;
		mp.insert({str, {i, false}});
	}

	scanf("%d", &n);
	while (n -- )
	{
		string str; cin >> str;
		if (mp.find(str) != mp.end())
		{
			auto t = mp[str];
			if (!t.second)
			{
				if (t.first != 1)
				{
					if (isPrime(t.first)) cout << str << ": " << "Minion";
					else cout << str << ": " << "Chocolate";
				}
				else cout << str << ": " << "Mystery Award";
				mp[str].second = true;
			}
			else cout << str << ": " << "Checked";
			
		}
		else cout << str << ": " << "Are you kidding?";
		printf("\n");
	}

}

int main()
{

	// int t; scanf("%d", &t);
	// while (t -- )
	// {
		solve();
	// }

}