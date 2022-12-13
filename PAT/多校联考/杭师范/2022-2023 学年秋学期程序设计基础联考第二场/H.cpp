#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 100010;

int a[N];
int cnt[3]; // 0q 1w 2e

void check(int *cnt)
{
	if (cnt[0] == 3) printf("0 ");
	if (cnt[0] == 2)
	{
		if (cnt[1]) printf("2 ");
		if (cnt[2]) printf("1 ");
	}

	if (cnt[1] == 3) printf("5 ");
	if (cnt[1] == 2)
	{
		if (cnt[0]) printf("4 ");
		if (cnt[2]) printf("3 ");
	}

	if (cnt[2] == 3) printf("6 ");
	if (cnt[2] == 2)
	{
		if (cnt[0]) printf("7 ");
		if (cnt[1]) printf("8 ");
	}

	if (cnt[0] && cnt[1] && cnt[2]) printf("9 ");

}

void solve()
{
	int n; cin >> n;
	string str, ch;

	for (int i = 1; i <= n; i ++ ) cin >> ch, str += ch;

	bool flag = true;
	for (int i = 0; i < str.size(); i ++ )
	{

		if (str[i] == '3')
		{
			memset(cnt, 0, sizeof cnt);
			if (flag)
			{
				// printf("1\n");
				string sub1 = str.substr(i - 3, i);
				// cout << sub1;
				cnt[sub1[i - 1] - '0'] ++ ;
				cnt[sub1[i - 2] - '0'] ++ ;
				cnt[sub1[i - 3] - '0'] ++ ;
				flag = false;
				check(cnt);
				continue;
			}

			int j1 = i - 1, j2 = i + 1;
			string sub1;
			while (str[j1] != '3') j1 -- ;
			if (i - j1 > 3) j1 = i - 3;
			if (i + 3 > str.size()) sub1 = str.substr(j1, str.size() - i);
			else sub1 = str.substr(j1, 6);
			// printf("i:%d j1:%d\n", i, j1);
			// cout << sub1 << endl;

			int cnt1 = 0;
			for (int i = 0; i < sub1.size(); i ++ )
			{
				cout << sub1[i] << " ";
				if (cnt1 == 3) break;
				if (sub1[i] != '3') cnt[sub1[i] - '0'] ++ , cnt1 ++ ;
				else continue;
			}
			printf("\n");
			for (int i = 0; i < 3; i ++ ) printf("%d ", cnt[i]);
			printf("\n");
			printf("\n");
				


			// if (cnt1 == 3) check(cnt);


		}

	}


}

int main()
{
	int t; scanf("%d", &t);
	while (t -- )
	{
		solve();
		puts("");
	}
	return 0;
}