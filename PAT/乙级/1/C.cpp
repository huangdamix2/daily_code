#include <map>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

// unordered_map<int, int> mp;
map<int, int> mp;
vector<int> v;
int a[N];

int cnt;

void solve()
{
	return;
}

int main()
{
	int t, n; scanf("%d", &t);
	// memset(a, -1, sizeof a);
	n = t;
	int cnt = 1;
	while (n -- )
	{
		int name, skec;
		scanf("%d%d", &name, &skec);
		if (mp.find(name) != mp.end()) mp[name] = cnt;
		else mp.insert({name, cnt});
		a[name] = skec;
		cnt ++ ;
		// solve();
	}



	for (int i = 1; i <= t; i ++ )
		for (auto m : mp) 
			if (m.second == i && a[m.first]) v.push_back(m.first);

	for (int i = 0; i < v.size(); i ++ )
	{
		printf("%d", v[i]);
		if (i != v.size() - 1) printf(" ");
	}
	puts("");

	if (v.size() == 1) printf("Da Ben Zhong is found!");
	else printf("There are %d suspects.", v.size());

	// for (auto )

	return 0;
}
