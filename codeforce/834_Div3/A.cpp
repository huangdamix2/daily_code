#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;

void solve()
{
	string str; cin >> str;
	string Ostr = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
	if (Ostr.find(str) == string::npos) printf("NO\n");
	else printf("YES\n");
}

int main()
{
	int t; scanf("%d", &t);

	while (t -- )
	{
		solve();
	}
	
	return 0;
}