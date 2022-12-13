#include <set>
#include <map>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

// unordered_map<int, int> mp;
map<int, int> mp;
// unordered_set <int> unset;
// vector<int> v1, v2;
// int a[N];

// set<int> st;
// vector<int> v;



void solve()
{
	return;
}

int main()
{
	int t; scanf("%d", &t);
	// memset(a, -1, sizeof a);
	

	for (int i = 0; i < t; i ++ )
	{
		int name, skec;
		scanf("%d%d", &name, &skec);
		// if (st.find(name) == st.end()) v.push_back(name), st.insert(name);
		if (mp.find(name) == mp.end()) mp.insert({name, skec});
		else mp[name] = skec;
		// a[name] = skec;
	}
	// if (t == 1)  

	// int i, len = v.size(), cnt = 0;
	int cnt = 0;

	string str;
	for (auto me : mp)
		if (me.second) str += to_string(me.first) + ' ', cnt ++ ;

	cout << str.substr(0, str.size() - 1);
	/*
	for (int i = 0; i < cnt; i ++ )
	{
		cout << str[i];
		if (i != cnt - 1) printf(" ");
	}

	*/
	// printf("1\n");
	puts("");

	if (cnt == 1) printf("Da Ben Zhong is found!");
	else printf("There are %d suspects.\n", cnt);


	return 0;
}
