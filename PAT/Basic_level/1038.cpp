#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
const int N = 100010;

vector<int> findN;

int main()
{
	
	int n1; scanf("%d", &n1);
	unsigned int cnt[N] = {};
	int index;
	for (int i = 0; i < n1; i ++ )
	{
	 	scanf("%d", &index);
	 	cnt[index] ++ ;
	}

	int n2; scanf("%d", &n2);
	for (int i = 0; i < n2; i ++ )
	{
		scanf("%d", &index);
		findN.push_back(index);
	}

	for (int i = 0; i < findN.size(); i ++ )
	{
		printf("%d", cnt[findN[i]]);
		if (i + 1 != findN.size()) printf(" ");
	}


	

	return 0;
}