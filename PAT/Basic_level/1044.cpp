#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
string s;

void func1(int t)
{
	if (t / 13) cout << b[t / 13];
	if ((t / 13) && (t % 13)) cout << " ";
	if (t % 13 || t == 0) cout << a[t % 13];
}

void func2(string str)
{
	string s1, s2;
	int t1 = 0, t2 = 0;
	s1 = str.substr(0, 3);
	if (str.length() > 4) s2 = str.substr(4, 3);
	for (int j = 1; j <= 12; j ++ )
	{
        if (s1 == a[j] || s2 == a[j]) t2 = j;
        if (s1 == b[j]) t1 = j;
   	}
   	// cout << t1 << " " << t2 << endl;
   	cout << t1 * 13 + t2;
}

int main()
{

	int n; scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i ++ )
	{
		getline(cin , s);
		if (s[0] >= '0' && s[0] <= '9')
			func1(stoi(s));
		else
			func2(s);
		cout << endl;
	}

	return 0;
}