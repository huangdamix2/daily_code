#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	
	const int CLK_TCK = 100;
	int C1, C2; cin >> C1 >> C2;

	int n = ((C2 - C1) + 50) / CLK_TCK; // +50 为了四舍五入进位

	int hour = n / 3600;
	n %= 3600;
	int minuter = n / 60;
	int second = n % 60;

	printf("%02d:%02d:%02d\n", hour, minuter, second);





	return 0;
}