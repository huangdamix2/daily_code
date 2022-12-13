#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

const int N = 1010;
using namespace std;

vector<int> selectS;

int main()
{
	string num;
	string si[N]; // 考生号
	int site[N]; // 考试座位号
	int testSite; // 考试试机号

	int n; scanf("%d", &n);

	for (int i = 0; i < n; i ++ )
	{
		cin >> num >> testSite >> site[testSite];
		si[testSite] = num;
	}

	int m; scanf("%d", &m);

	for (int i = 0; i < m; i ++ ) scanf("%d", &testSite), selectS.push_back(testSite);

	for (int i = 0; i < selectS.size(); i ++ ) cout << si[selectS[i]] << " " << site[selectS[i]] << endl;

	return 0;
}