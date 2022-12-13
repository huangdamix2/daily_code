#include <iostream>
#include <cstring>
#include <cmath>
#include <set>


using namespace std;
set<int> s;

void solve()
{
	string num; cin >> num;
	int ans = 0;
	for (int i = 0; i < num.size(); i ++ ) ans += num[i] - '0';

	if (s.find(ans) == s.end()) s.insert(ans);

}

int main()
{
	int t; scanf("%d", &t);

	while (t -- )
	{
		solve();
	}

	cout << s.size() << endl;

	int cnt = s.size();
	for (auto iter = s.begin(); iter != s.end(); iter ++ )
	{
		printf("%d", *iter);
		if ( -- cnt) printf(" ");
	}
	puts("");

	return 0;
}