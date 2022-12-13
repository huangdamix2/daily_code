#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int N = 100010;

int main()
{
	string a, b;
	bool flag = true;
	cin >> a >> b;

	int scarce = 0;

	for (unsigned int i = 0; i < b.size(); i ++ )
		if (a.find(b[i]) != string::npos) a[a.find(b[i])] = '_';
		else flag = false, scarce ++ ;

	if (flag)
		printf("Yes %d\n", a.size() - b.size());
	else 
		printf("No %d\n", scarce);

	return 0;
}