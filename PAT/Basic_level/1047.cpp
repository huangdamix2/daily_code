#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int N; scanf("%d", &N);


	string team;
	int grade, index;
	int sum[1010] = {};
	int maxG = 0, maxI = 0; 
	for (int i = 0; i < N; i ++ )
	{

		cin >> team >> grade;
		int j = 0;
		while (team[j] != '-') j ++ ;
		index = stoi(team.substr(0, j));
		sum[index] += grade;
		if (sum[index] > maxG) 
		{
			maxG = sum[index];
			maxI = index;
		}
		//cout << maxI << " " << maxG << endl;
	}

	cout << maxI << " " << maxG << endl;

	return 0;
}