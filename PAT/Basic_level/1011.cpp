#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>

using namespace std;
const int N = 100010;
typedef long long ll;

bool caseABC(ll n, ll m)
{
	return n > m;
}

int main()
{
	int n, i = 0;
	ll A, B ,C;

	cin >> n;
	int caseN[n];

	while (i < n)
	{
		cin >> A >> B >> C;
		// if (caseABC(A + B, C)) caseN[i] = true;

		// cout << ((A + B) > C) << endl;
		// caseB = caseABC(A + B, C);
		// cout << caseB << endl;

		if (caseABC(A + B, C)) caseN[i] = 1;
		else caseN[i] = 0;
		i ++;
	}

	for (i = 0; i < n; i ++ ) 
		if (caseN[i]) printf("Case #%d: true\n", i + 1);
		else printf("Case #%d: false\n", i + 1);

		// printf("%d ", caseN[i]);

	return 0;
}