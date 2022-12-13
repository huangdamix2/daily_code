#include <iostream>
#include <cstring>
#include <algorithm>
const int N = 1010;

int n, k;

struct node
{
	string name;
	int height;	
} member[N];

bool cmp(node x, node y)
{
	return x.height == y.height ? x.name < y.name : x.height < y.height;
}

int main()
{
	scanf("%d%d", &n, &k);

	for (int i = 0; i < n; i ++ ) cin >> member[i].name >> member[i].height;

	sort(member, member + n, cmp);

	int row = k;
	while (row)
	{
		if (k == row)
		{
			m = 
		}
	}
	



}