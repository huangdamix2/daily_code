#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 100010;

struct cnt 
{
};

int main()
{
	int P = 0, A = 0, T = 0, e = 0, s = 0, t = 0, cnt = 0;
	string a, b; cin >> a;
	for (int i = 0; i < a.length(); i ++ )
	{
		if (a[i] == 'P') P ++ , cnt ++ ;
		if (a[i] == 'A') A ++ , cnt ++ ;
		if (a[i] == 'T') T ++ , cnt ++ ;
		if (a[i] == 'e') e ++ , cnt ++ ;
		if (a[i] == 's') s ++ , cnt ++ ;
		if (a[i] == 't') t ++ , cnt ++ ;
	}

	for (int i = 0; i < cnt; i ++ )
	{
		if (P > 0) P -- , cout << 'P';
		if (A > 0) A -- , cout << 'A';
		if (T > 0) T -- , cout << 'T';
		if (e > 0) e -- , cout << 'e';
		if (s > 0) s -- , cout << 's';
		if (t > 0) t -- , cout << 't';
	}

	return 0;
}