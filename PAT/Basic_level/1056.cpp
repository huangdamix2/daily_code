#include <iostream>
#include <string>

using namespace std;

const int N = 20;


int main()
{
	int n, sum = 0; scanf("%d", &n);
	for (int i = 0; i < n; i ++ )
	{
		int num; cin >> num;
		sum += num * 10 * (n - 1) + num * (n - 1);
	}

	printf("%d\n", sum);

	return 0;
}