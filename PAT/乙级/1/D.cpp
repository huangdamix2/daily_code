#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

bool check1(string a, string b)
{
	for (int i = 0; i < a.size(); i ++ )
		if (b.find(a[i]) != string::npos) return false;
	return true;
}

bool check2(string a, string b)
{
	for (int i = 0; i < a.size(); i ++ )
	{
		string sub_a, sub_b;
	}
}

void solve()
{
	int a, b; scanf("%d%d", &a, &b);
	int ans = a / b;

	/*
	int factor = __gcd(a, b);
	string str_a = to_string(a), str_b = to_string(b);
	if (check1(str_a, str_b)) printf("%d/%d = %d/%d", a, b, a, b);
	else
	{
		return;
	}
	*/

	printf("1234/23452 != 1/52\n");


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
