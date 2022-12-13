#include <queue>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

queue<int> q;

bool st[N];
int waiting[N];

void solve()
{
	int n; scanf("%d", &n);

	for (int i = 0; i < n; i ++ )
	{
		int num; scanf("%d", &num);
		q.push(num);
	}

	int i = 1, cnt = 0, min = 1, sum = 0;
	while (q.size())
	{
		/* for (int i = cnt + 1; i <= n; i ++ )
		// {
			if (!st[i]) waiting[i] ++ ;
		}
		*/
		if (i == q.front()) q.pop(), cnt ++ , i ++ , sum += min;
		else  q.push(q.front()), q.pop(), cnt ++ ;
		min ++ ;
	}
	for (int i = 1; i <= n; i ++ ) sum += waiting[i];
	printf("%d %.1f\n", cnt, 1.0*sum/n);

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
