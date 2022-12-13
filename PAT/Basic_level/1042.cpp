#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int N = 100010;



int main()
{
	int a[26] = {};

	string s; getline(cin, s);

	for (int i = 0; i < s.length(); i ++ )
		s[i] = tolower(s[i]);

	for (int i = 0; i < s.length(); i ++ )
		if (islower(s[i])) a[s[i] - 'a'] ++ ;

	int max = a[0], j = 0;
	for (int i = 1; i < 26; i ++ )
		if (max < a[i])
		{
			j = i;
			max = a[i];
		}

	printf("%c %d\n", j + 'a', max);



	return 0;
}