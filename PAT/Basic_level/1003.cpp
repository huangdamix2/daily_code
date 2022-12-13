#include <iostream>
#include <string>

using namespace std;


bool isright(string str)
{
	int len = str.length();
	int a = 0, b = 0;
	for (int i = 0; i < len; i ++ )
	{
		if (str[i] == 'P' || str[i] == 'A' || str[i] == 'T')
		{
			if (str[i] == 'P') a++;
			if (str[i] == 'T' && a != 0) b++;
			if (str[i] == 'T' && a == 0) return false;

		}
		else return false;
	}

	if (a == 1 && b == 1)
	{
		int c = 0, d = 0, e = 0;
		for (int i = 0; i < len; i ++ )
		{
			if (str[i] == 'P') a++;
			if (str[i] == 'T') b++;
			if (str[i] == 'A' && a == 1) c++;
			if (str[i] == 'A' && a == 2 && b == 1) d++;
			if (str[i] == 'A' && a == 2 && b == 2) e++;
		}
		if ((c == 0 && e == 0 && d != 0) || (c*d==e&&d!=0)) return true;
	}

	return false;
}

int main()
{
	
	int n; cin >> n;
	string str[n];
	for (int i = 0; i < n; i ++ )
		cin >> str[i];

	for (int i = 0; i < n; i ++ )
	{
		if(isright(str[i])) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}