#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

const int N = 100010;

bool isTrue(string num)
{
	int ListN[N] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int b[N] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};
	int sum = 0;
	for (int i = 0; i < 17; i ++ )
	{
		if ( num[i] < '0' || num[i] > '9') return false;
		else sum += (num[i] - '0') * ListN[i];
	}
	int temp = (num[17] == 'X') ? 10 : (num[17] - '0');
	return b[sum % 11] == temp;


}

int main()
{
	

	string num;

	vector<string> errorNum;

	int cnt = 0; 

	int n; scanf("%d", &n);
	for (int i = 0; i < n; i ++ )
	{
		cin >> num;
		if(!isTrue(num)) 
		{
			cnt ++ ;
			errorNum.push_back(num);
		}
	}

	if (cnt != 0)
	{
		// printf("%d\n", cnt);
		for (int i = 0; i < errorNum.size(); i ++ ) cout << errorNum[i] << endl;
	}
	else printf("All passed\n");


	return 0;
}