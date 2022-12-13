#include <iostream>

using namespace std;

void top_bottom(int n)
{
	int m = n * 3;
	for (int i = 0; i < m; i ++ ) printf("*");
	printf("\n");

	for (int i = 1; i < n; i ++ )
	{
		for (int j = 0; j < m; j ++ )
		{
			if (i < n / 2)
			{
				if (j == i || i == m - 1 - j) printf("*");
				else printf(" ");
			}
			else
			{
				if (j == i) printf("*"); 
				else printf(" ");
			}
		}
		printf("\n");
	}


	for (int i = n - 2; i >= 1; i -- )
	{
		for (int j = 0; j < m; j ++ )
		{
			if (i < n / 2)
			{
				if (j == i || i == m - 1 - j) printf("*");
				else printf(" ");
			}
			else
			{
				if (j == i) printf("*"); 
				else printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < m; i ++ ) printf("*");


}


int main()
{

	int n; scanf("%d", &n);

	top_bottom(n);



	// top_bottom(n);


	
	return 0;
}