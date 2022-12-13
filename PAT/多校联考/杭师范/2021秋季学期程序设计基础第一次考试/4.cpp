#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string num;

	while (cin >> num)
	{
		if (num.find('0') != string::npos)
		{
			cout << "AC" << endl;
			continue;
		}

		int n = stoi(num);
		if ( (n % 6 == 0 && n % 9 == 0) && (n % 7 != 0 && n % 8 != 0) ) cout << "AC" << endl;
		else if ( (n % 6 != 0 && n % 9 != 0) && (n % 7 == 0 || n % 8 == 0) ) cout << "WA" << endl;
		else cout << "TLE" << endl;

	}

	

	
	return 0;
}