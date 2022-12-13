#include <iostream>

using namespace std;

void add_output(string &str, string add, int cnt)
{
	if (cnt) str += ' ' + add;
	else str += add;
}

int main()
{
	double a, b, iR, s;

	cin >> a >> b;
	iR = a / 2.0 - b;
	s = iR * iR * 3.14159;
	// cout << s;
	double mj, xygg, hxgg, Lily;
	cin >> mj >> xygg >> hxgg >> Lily;
	int cnt = 0;
	string output;
	if (mj > s) add_output(output, "mj", cnt), cnt ++ ;
	if (xygg > s) add_output(output, "xygg", cnt), cnt ++ ;
	if (hxgg > s) add_output(output, "hxgg", cnt), cnt ++ ;
	if (Lily > s) add_output(output, "Lily", cnt), cnt ++ ; 
	if (!cnt) cout << "None" << endl;
	else cout << output << endl;

	return 0;
}