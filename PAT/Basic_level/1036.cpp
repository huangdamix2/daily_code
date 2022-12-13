#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	double column, line;
	char si;
	cin >> column >> si;
	line = round(column / 2);
	for (int i = 0; i < column; i ++ )
		cout << si;
	cout << endl;

	for (int i = 1; i < line - 1; i ++ )
	{
		for (int j = 0; j < column; j ++ )
			if (j == 0 || j + 1 == column) cout << si;
			else cout << " ";
		cout << endl;
	}

	for (int i = 0; i < column; i ++ )
		cout << si;
	return 0;
}