#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

struct node
{
	double num;
	double price;
	double unit;
};

int cmp(node a, node b)
{
	return a.unit > b.unit;
}

int main()
{
	int n, need; scanf("%d %d", &n, &need);
	vector<node> Node(n);
	for (int i = 0; i < n; i ++ ) cin >> Node[i].num;
	for (int i = 0; i < n; i ++ ) cin >> Node[i].price, Node[i].unit = Node[i].price / Node[i].num;

	sort(Node.begin(), Node.end(), cmp);

	float result = 0.0;

	// for (int i = 0; i < n; i ++ ) cout << Node[i].unit << endl;

	for (int i = 0; i < n; i ++ )
	{
		if (Node[i].num <= need)
		{
			result += Node[i].price;
		}
		else
		{
			result += Node[i].unit * need;
			break;
		}
		need -= Node[i].num;
	}

	printf("%.2f\n", result);

	return 0;
}