#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n; scanf("%d", &n);

	int aNum, bNum, aGes, bGes, aLose = 0, bLose = 0; // a为甲, b为乙
	for (int i = 0; i < n; i ++ )
	{
		cin >> aNum >> aGes >> bNum >> bGes;
		int sNum = aNum + bNum;

		if ((aGes != sNum && bGes != sNum) || (aGes == sNum && bGes == sNum)) continue;
			//aLose ++ , bLose ++ ;
		// cout << aGes << " " << bGes << endl;
		if (aGes == sNum) bLose ++ ;
		if (bGes == sNum) aLose ++ ;
	}

	cout << aLose << " " << bLose;

	return 0;
}