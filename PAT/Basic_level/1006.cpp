#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
const int N = 100010;


vector<int> reNum;

int main()
{
	int n; scanf("%d", &n);

	string sign[] = {"S", "B"};

	for (int i = n; i > 0; i /= 10)
		reNum.push_back(i % 10);



	for (int i = reNum.size() - 1; i >= 0; i -- ) 
	{
		if (i != 0)
		{
			for (int j = 0; j < reNum[i]; j ++ )
				cout << sign[i - 1];
		}
		else
		{
			for (int j = 1; j <= reNum[i]; j ++ ) printf("%d", j);
		}

		// printf("%d ", reNum[i]); // 2 3 4
	}


	return 0;
}