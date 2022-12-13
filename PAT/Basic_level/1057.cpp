#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;


void solve()
{
	string str; getline(cin, str);
	// cout << str;
	int cnt0 = 0, cnt1 = 0;
	int sum = 0;
	for (int i = 0; i < str.size() ; i ++ )
	{
		if (tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z') 
			sum += tolower(str[i]) - 'a' + 1;
			// printf("%d\n", tolower(str[i]) - 'a'); // 
		// if (str[i] <= 'z' && str[i] >= 'a') // sum += str[i] - 'a' + 1;
	}
	// printf("%d\n", sum);
	if (!sum) 
	{
		printf("0 0\n");
		return;
	}

	vector<int> q;
	q.push_back(sum & 1);
	cnt1 += sum & 1;
	while (sum)
	{
		q.push_back(sum >> 1 & 1);
		sum /= 2;
	}

	// reverse(q.begin(), q.end());

	printf("%d\n", q.size());


	for (auto i = q.end(); i >= q.begin(); i -- ) 
		if (*i == 0) q.pop_back();
		else break;
	for (int i = 0; i < q.size(); i ++ ) printf("%d  ", q[i]);
	for (auto i = q.begin(); i < q.end(); i ++ )
	{
		if (*i == 1) cnt1 ++ ;
		if (*i == 0) cnt0 ++ ;
	}

	printf("%d %d", cnt0, cnt1);
}

int main()
{
	solve();
	return 0;
}