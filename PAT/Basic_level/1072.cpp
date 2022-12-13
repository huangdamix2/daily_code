#include <set>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <unordered_map>


using namespace std;
const int N = 250010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

set<string> s;
// unordered_map<string, vector<string>> mp;

int cntgood, cntperson;


/*
void record(string &name, string &good)
{
	mp[name].push_back(good);
	cntgood ++ ;
}
*/

void solve()
{
	int n, m; scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i ++ )
	{
		string str; cin >> str;
		s.insert(str);
	}

	for (int i = 0; i < n; i ++ )
	{
		string name; cin >> name;
		int num; cin >> num;
		bool flag = false;
		vector<string> v;
		while (num -- )
		{
			string good; cin >> good;
			if (s.find(good) != s.end()) { v.push_back(good); cntgood ++ ; flag = true; } // record(name, good)
		}
		if (flag) 
		{
			cout << name << ":";
			for (auto iter = v.begin(); iter != v.end(); iter ++ ) cout << " " << *iter;
			cntperson ++ ;
			puts("");
		}



	}

	/*
	for (auto iter = mp.begin(); iter != mp.end(); iter ++ )
	{	
		cout << iter->first << ':';
		for (auto it = mp[iter->first].begin(); it != mp[iter->first].end(); it ++ )
			cout << " " << *it;
		cout << endl;
	}
	*/

	printf("%d %d\n", cntperson, cntgood);

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