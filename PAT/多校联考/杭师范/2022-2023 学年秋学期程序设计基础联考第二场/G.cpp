#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ULL;
const int N = 100010;

int trans[10];

ULL func(string str)
{
	ULL num = 0;
	for (int i = 0; i < str.size(); i ++ )
	{
		num += trans[str[i] - '0'];
		if (i + 1 != str.size()) num *= 10;
		printf("%d\n", num);
	}
	// cout << num << endl;
	return num;
}

void solve()
{
	// ULL num1 = 0; 
	for (int i = 0; i < 10; i ++ ) cin >> trans[i];
	int k;
	ULL num; cin >> num >> k; 
	
	while (k -- )	
	{
		num += func(to_string(num));
	}
	


	cout << num;
	

	

}

int main()
{
	int t; scanf("%d", &t);
	while (t -- )
	{
		solve();
		if (t) puts("");
	}
	return 0;
}