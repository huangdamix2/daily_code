#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


// 输出由空格隔开的每一个单词
int main()
{
	char str[1000];
	gets(str);
	int n = strlen(str);

	for (int i = 0; str[i]; i ++ )
	{
		int j = i;
		while (j < n && str[j] != ' ') j ++ ;

		// 具体逻辑
		for (int k = i; k < j; k ++ ) cout << str[k];
		cout << endl;

		i = j;

	}	


	return 0;
}