#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>

using namespace std;
const int N = 1010;
typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

struct mul_ch
{
	int full, opt, cor_opt;
	string ans;
} answer[N];

map<int, int> mp;
int cnt;

void solve()
{
	int m, n; scanf("%d%d", &n, &m);

	for (int i = 0; i < m; i ++ )
	{
		cin >> answer[i].full >> answer[i].opt >> answer[i].cor_opt;
		int t = answer[i].cor_opt;
		while (t -- )
		{
			string cat; cin >> cat;
			answer[i].ans += cat;
		}
	}

	/*
	for (int i = 0; i < m; i ++ )
	{
		cout << answer[i].full << answer[i].opt << answer[i].cor_opt;
		cout << answer[i].ans;
	}
	*/


	for (int i = 0; i < n; i ++ )
	{
		string str; getline(cin, str);
		// cout << str << endl;
		for (int j = 0; j < str.size(); j ++ )
		{
			if (str[j] == '(')
			{
				int k = j;
				while (str[k] != ')') k ++ ;
				// cout << str.substr(j + 1, k - j - 1) << endl;
				string subStr = str.substr(j + 1, k - j - 1);
				int num = subStr[0] - '0';
				string stu_ans;
				for (int i = 1; i < subStr.size(); i ++ )
					if (subStr[i] != ' ') stu_ans += subStr[i];
				// cout << stu_ans << endl;

				if (mp.find(j + 1) == mp.end())
				{
					mp.insert(PII(j+1, 1));
				}
				else mp[j + 1].second ++ , cnt = max(cnt, mp[j + 1].second)


				// string stu_ans = substr(j + 1, k - j - 1);


				j = k;
			}
		}

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