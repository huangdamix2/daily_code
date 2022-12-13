#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;	
	vector<int> A;

	for (int i = 0, j = 0; i < 10; i ++ , j ++ )
	{
		cin >> n;
		for (int k = 0; k < n; k ++ ) A.push_back(j);
	}
	sort(A.begin(), A.end());

	// 00115558
	if (A[0] == 0)
		for(int i = 1; i < A.size(); i ++ )
			if (A[i] > A[0]) 
			{
				swap(A[i], A[0]);
				break;
			}

	for(int i = 0; i < A.size(); i ++ ) printf("%d", A[i]);


	return 0;	
}