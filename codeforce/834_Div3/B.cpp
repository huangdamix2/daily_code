#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 100010;

void solve()
{
	int m, s, minX = 1000; scanf("%d%d", &m, &s);
	vector<int> a, b;
	for (int i = 0; i < m; i ++ )
	{
		int num; cin >> num;
		a.push_back(num);
	 	minX = min(minX, num);
	}
	sort(a.begin(), a.end());
	b = a;

 	b.erase(unique(b.begin(), b.end()), b.end());

 	if (b.size() != a.size())
 	{
 		printf("NO\n");
 		return;
 	}



	for (int i = 0; i < m; i ++ ) printf("%d ", a[i]);

	// return;
	if (minX - 1 > 0) minX -- ;
	for (int i = minX, j = 0; ; i ++ )
	{

		if (i == a[j])
		{
			j ++ ;
			continue;
		}

		if (s > 0) s -= i;
		else break;
	}	
	if (s == 0) printf("YES\n");
	else printf("NO\n");

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