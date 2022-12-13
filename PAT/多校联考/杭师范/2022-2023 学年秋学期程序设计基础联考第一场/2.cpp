#include <iostream>
#include <cstdio>

using namespace std;
const int N = 100010;

int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int numX = x2 - x1, numY = y2 - y1;

	cout << (abs(numX) + abs(numY)) << " "
		<< max(abs(numX), abs(numY));
	return 0;
}