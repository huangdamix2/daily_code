#include <iostream>
#include <cstdio>

using namespace std;

int calcu(int h1, int m1, int h2, int m2)
{
	int sum = 0;
	int t = 0; // 借位
	if (m2 < m1) m2 += 60, t ++ ;
	sum += m2 - m1;
	sum += 60 * (h2 - h1 - t);
	return sum;
}

int main()
{
	
	int h1, m1, h2, m2;
	int sum = 0;
	for (int i = 0; i < 3; i ++ )
	{
		cin >> h1 >> m1 >> h2 >> m2;
		sum += calcu(h1, m1, h2, m2);
	}

	cout << sum / 60 << " " << sum % 60 << endl;

	if (sum >= 240) cout << "YES";
	else cout << "NO";



	return 0;
}