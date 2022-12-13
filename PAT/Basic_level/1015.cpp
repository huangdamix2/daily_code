#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
const int N = 100010;

struct student
{
	int id;
	int a,b;
} temp;

int n, L, H;

vector<student> v1, v2, v3, v4;

bool cmp(student a, student b)
{
	if (a.a + a.b == b.a + b.b)
	{
		if (a.a == b.a) return a.id < b.id;
		return a.a > b.a;
	}
	return a.a + a.b > b.a + b.b;
}

int main()
{
	cin >> n >> L >> H;
	for (int i = 0; i < n; i ++ )
	{
		cin >> temp.id >> temp.a >> temp.b;
		if (temp.a >= L && temp.b >= L)
		{
			if (temp.a >= H && temp.b >= H) v1.push_back(temp);
			else if (temp.a >= H && temp.b < H) v2.push_back(temp);
			else if (temp.a >= temp.b) v3.push_back(temp);
			else v4.push_back(temp);
		}
	}

	cout << v1.size() + v2.size() + v3.size() + v4.size() << endl;
	sort(v1.begin(), v1.end(), cmp);
	sort(v2.begin(), v2.end(), cmp);
	sort(v3.begin(), v3.end(), cmp);
	sort(v4.begin(), v4.end(), cmp);

	for(int i=0;i<v1.size();i++) cout<<v1[i].id<<" "<<v1[i].a<<" "<<v1[i].b<<endl;
	for(int i=0;i<v2.size();i++) cout<<v2[i].id<<" "<<v2[i].a<<" "<<v2[i].b<<endl;
	for(int i=0;i<v3.size();i++) cout<<v3[i].id<<" "<<v3[i].a<<" "<<v3[i].b<<endl;
	for(int i=0;i<v4.size();i++) cout<<v4[i].id<<" "<<v4[i].a<<" "<<v4[i].b<<endl;


	return 0;	
}