#include <iostream>

const int N = 1010;
using namespace std;

struct hello
{
	int a, b, c;
	char ch;	
} hellow[N];

void boolen(hello &f)
{
	cout << f.c << endl;
	f.c = 4;

}

int main()
{
	boolen(hellow[1]);

	cout << hellow[1].c << endl;
	return 0;
}