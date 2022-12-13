#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long LL;

bool cmp(LL a, LL b)
{
	return a > b;
}

int main()
{
	LL x, y, z;
	vector<LL> a;
 	LL D;
	LL k;

	cin >> x >> y >> z;
	for (int i = 0; i < 4; i ++ ) cin >> D, a.push_back(D);
	sort(a.begin(), a.end(), cmp);
	// for (int i = 0; i < 4; i ++ ) cout << a[i] << " ";
	cin >> k;

	LL money = 0;
	for (int i = 0; i < 3; i ++ ) money += k * a[i];
	if (money >= x) cout << "A";
	else if (money >= y) cout << "B";
	else if (money >= z) cout << "C";
	else cout << "POOR";
	cout << endl;



	
	return 0;
}