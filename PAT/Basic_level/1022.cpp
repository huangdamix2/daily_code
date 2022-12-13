#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> add(vector<int> &A, vector<int> &B)
{

	vector<int> C;
	int t = 0;

	for (int i = 0; i < A.size() || i < B.size(); i ++ )
	{
		if (i < A.size()) t += A[i];
		if (i < B.size()) t += B[i];
		C.push_back(t % 10);
		t /= 10;
	}

	if (t) C.push_back(1);
	return C;

}

string transit(int num, int syst)
{
	string aftTra;
	int tr;
	while (num)
	{
		tr = num % syst;
		aftTra = to_string(tr) + aftTra;

		// cout << num % syst << endl;
		num /= syst;
	}
	return aftTra;
}

int main()
{
	
	/*
	string a, b; cin >> a >> b;

	vector<int> A, B;

	for (int i = 0; i < a.size(); i ++ ) A.push_back(a[i] - '0');
	for (int i = 0; i < b.size(); i ++ ) B.push_back(b[i] - '0');


	auto C = add(A, B);

	for (int i = C.size() - 1; i >= 0; i -- ) printf("%d", C[i]);
	*/

	int a, b, syst; scanf("%d %d %d", &a, &b, &syst);


	string res = transit(a + b, syst);
	if (res[0] > 0) cout << res;
	else cout << '0';
	return 0;
}