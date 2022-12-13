#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	string s;
	cin >> s;
	int i = 0;
	while (s[i] != 'E') i ++ ;
	string t = s.substr(1, i - 1);
	cout << t << endl;
	int n = stoi(s.substr(i + 1));
	cout << n << endl;
	if (s[0] == '-') cout << '-';
	if (n < 0)
	{
		cout << "0.";
		for (int i = 0; i < abs(n) - 1; i ++ ) cout << '0';
		for (int i = 0; i < t.size(); i ++ ) if (t[i] != '.') cout << t[i];
	}
	else
	{
		int cnt = 0;
		for (int i = t.size() - 1; i >= 0; i -- )
		{
			if (t[i] != '0') break;
			else cnt ++ ;
		}
		for (int i = 0; i < t.size() - cnt; i ++ ) if (t[i] != '.') cout << t[i];
		for (int i = 0; i < n; i ++ ) cout << '0';
	}


	return 0;
}