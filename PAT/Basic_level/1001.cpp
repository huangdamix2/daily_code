#include <iostream>

int n;

int main()
{
	scanf("%d", &n);
	int sum = 0;

	while (n > 1)
	{
		if (n % 2 != 0) n = (3 * n + 1) / 2;
		else n /= 2;
		sum++;
	}
	printf("%d", sum);


	return 0;

}