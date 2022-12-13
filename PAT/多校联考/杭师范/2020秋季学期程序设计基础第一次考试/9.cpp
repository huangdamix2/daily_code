#include <iostream>
#include <cstdio>

using namespace std;
const int N = 100010;

void trangle(int row, int colume)
{
	for (int i = 0; i < row - 1; i ++ )
	{
		// printf("%d\n", i);
		int flag = 0; // 0, 1, 2
		for (int j = 1; j <= colume; j ++ )
		{
			
			if (flag == 0)
			{
				if (j == row - i || j == row) printf("*");
				else printf(" ");
			}
			else if (flag == 1)
			{
				printf(" ");
			}
			else if (flag == 2)
			{
				if (j == 2 * row + 1 || j == 2 * row + i + 1) printf("*");
				else printf(" ");
			}
			if (j % row == 0) flag ++ ;

		}
		printf("\n");
	}

}

void square(int row, int colume)
{
	for (int i = 0; i < colume; i ++ ) printf("*");
	printf("\n");

	for (int i = 1; i < row - 1; i ++ )
	{
		for (int j = 0; j < colume; j ++ )
		{
			if (!j || j == colume - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	for (int i = 0; i < colume; i ++ ) printf("*");
	printf("\n");
}

int main()
{

	int t; scanf("%d", &t);
	int a[N];
	for (int i = 0; i < t; i ++ ) // 打印个数
		cin >> a[i];
	
	for (int i = 0; i < t; i ++ ) // 打印个数
	{
		trangle(a[i], a[i] * 3);
		square(a[i], a[i] * 3);
	}


	return 0;
}