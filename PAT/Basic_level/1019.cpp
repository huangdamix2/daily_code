#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{

	string a, b;

	cin >> a;

	while (1)
	{
		while (a.size() < 4) a = '0' + a;
		sort(a.begin(), a.end());
		b = a;
		reverse(a.begin(), a.end());

		int temp1 = stoi(a), temp2 = stoi(b);

		if (temp1 == temp2) 
		{
			printf("%04d - %04d = 0000\n", temp1, temp2);
			break;
		}
		if (temp1 - temp2 == 6174)
		{
			printf("%04d - %04d = 6174\n", temp1, temp2);
			break;
		}

		printf("%04d - %04d = %04d\n", temp1, temp2, temp1 - temp2);
		a = to_string(temp1 - temp2);

	}


	return 0;
}
