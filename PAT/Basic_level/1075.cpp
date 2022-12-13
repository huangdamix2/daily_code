#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 100010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<int, PII> PIII;
int e[N], ne[N], head;


void add(int address, int val, int next)
{
	e[address] = val, ne[address] = next;
}

void solve()
{
	memset(ne, -1, sizeof ne);
	int t, k; scanf("%d%d%d", &head, &t, &k);
	// int t, k; scanf("%d%d%d", &head, &t, &k);
	if (t == 1) 
	{
		int address, val, next; scanf("%d%d%d", &address, &val, &next);
		printf("%05d %d %d\n", address, val, next);
		return;
	}

	vector<PIII> v1, v2, v3, v4;

	while (t -- )
	{
		int address, val, next; scanf("%d%d%d", &address, &val, &next);
		add(address, val, next);
	}

	bool ok = false;
	for (int i = head, iter = 0; i != -1; i = ne[i], iter ++ )
	{
		int val = e[i], addr = i, nex = ne[i];
		if (val < 0) v1.push_back({val, {addr, nex}});
		else if (val >= 0 && val <= k) v2.push_back({val, {addr, nex}});
		else v3.push_back({val, {addr, nex}});
	}
	// puts("");

	if (v1.size()) 

	for (auto ans : v1) v4.push_back(ans);
	for (auto ans : v2) v4.push_back(ans);
	for (auto ans : v3) v4.push_back(ans);

	head = v4[0].second.first;

	// printf("%d\n", head);	

	// for (auto ans : v4) printf("%d-> ", ans.first);
	add(v4[0].second.first, v4[0].first, v4[1].second.first);
	for (int iter = 1; iter < v4.size(); iter ++ )
	{
		if (iter + 1 < v4.size()) add(v4[iter].second.first, v4[iter].first, v4[iter + 1].second.first);
		else add(v4[iter].second.first, v4[iter].first, -1);
	}

	for (int i = head; i != -1; i = ne[i])
	{
		if (ne[i] != -1) printf("%05d %d %05d\n", i, e[i], ne[i]);
		else printf("%05d %d %d\n", i, e[i], ne[i]);
	}

}

int main()
{

	// int t; scanf("%d", &t);
	// while (t -- )
	//{
		solve();
	// }

	return 0;
}