#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

void solve()
{
	int cnt1; scanf("%d", &cnt1);
	string s1;
	int cnt = 0;
	while (getline(cin, s1))
	{
		// s2 += s1;
	
		for (int i = 0, j = 0; i < s1.size(); i ++ )
		{
			if (s1[i] == ')')
			{
				while (s1[j] != '(' && j < s1.size() - 1) j ++ ;
				string subStr = s1.substr(j + 1, i - j -1);
				if (subStr == "zhangsheng") cnt ++ ;
				j = i;
				// cout << subStr << endl;
			}
		}

		if (s1.find('#') != string::npos) break;
	}
	// cout << s2 << endl;

	/*
	for (int i = 0, j = 0; i < s2.size(); i ++ )
	{
		if (s2[i] == ')')
		{
			while (s2[j] != '(') j ++ ;
			string subStr = s2.substr(j + 1, i - j -1);
			if (subStr == "zhangsheng") cnt ++ ;
			j = i;
			// cout << subStr << endl;
		}
	}
	*/

	printf("%d ", cnt);
	if (cnt >= cnt1) printf("True\n");
	else printf("False\n");


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
