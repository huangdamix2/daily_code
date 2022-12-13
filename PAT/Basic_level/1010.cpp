#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

const int N = 100010;

int main()
{

	vector<int> ans;
	int a, b;
	while (cin >> a >> b)
	{
		if (a && b)
		{
			ans.push_back(a * b);
			ans.push_back(b - 1);
		}
	}

	if (ans.size())
	{
		for (int  i = 0; i < ans.size(); i ++ )
		{
			cout << ans[i];
			if (i + 1 != ans.size()) cout << " ";
		}
	}
	else cout << "0 0";
	return 0;
}