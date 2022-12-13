#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>


using namespace std;

vector<vector<string>> emoji;
void init(string s1)
{
	vector<string> s2;
	for (int i = 0, j = 0; i < s1.length(); i ++ )
	{
		while (i > j && s1[i] == ']')
		{
			// printf("i: %d, j: %d\n", i, j);
			if (s1[j] == '[') s2.push_back(s1.substr(j + 1, i - j - 1)), j = i; // , cout << s2 << endl;
			else j ++ ;
		}
	}
	emoji.push_back(s2);
}

int main()
{
	vector<string> hand, eye, mouth;
	string s1;
	int k = 3;
	while(k -- )
	{
		getline(cin, s1);
		init(s1);
	}



	/*
	for (int i = 0; i < head.size(); i ++ ) cout << hand[i] << " ";
	for (int i = 0; i < eye.size(); i ++ ) cout << eye[i] << " ";
	for (int i = 0; i < mouth.size(); i ++ ) cout << mouth[i] << " ";
	*/
	scanf("%d", &k);
	int a, b, c, d, e;
	for (int i = 0; i < k; i ++ )
	{
		cin >> a >> b >> c >> d >> e;
		if (a > emoji[0].size() || b > emoji[1].size() || c > emoji[2].size() || d > emoji[1].size() || e > emoji[0].size() || a < 1 || b < 1 || c < 1 || d < 1 || e < 1)
		{
			printf("Are you kidding me? @\\/@\n");
			continue;
		}
		cout << emoji[0][a - 1] << "(" 
			<< emoji[1][b - 1] << emoji[2][c - 1] << emoji[1][d - 1]
			<< ")" << emoji[0][e - 1] << endl; 
	}
	return 0;
}
