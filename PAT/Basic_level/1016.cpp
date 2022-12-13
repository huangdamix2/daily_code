#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	string Da, Db; 
	char indexDa, indexDb;
	vector<char> Pa, Pb;

	cin >> Da >> indexDa >> Db >> indexDb;

	for (int i = 0; i < Da.size(); i ++ ) if (indexDa == Da[i]) Pa.push_back(Da[i]);
	for (int i = 0; i < Db.size(); i ++ ) if (indexDb == Db[i]) Pb.push_back(Db[i]);

	for (int i = 0; i < Pa.size(); i ++ ) cout << Pa[i];

	int sum = 0;

	for (int i = Pa.size() - 1; i >= 0; i -- ) sum += pow(10, i) * (int)(Pa[i] - '0');
	for (int i = Pb.size() - 1; i >= 0; i -- ) sum += pow(10, i) * (int)(Pb[i] - '0');

	printf("%d\n", sum);





	return 0;
}