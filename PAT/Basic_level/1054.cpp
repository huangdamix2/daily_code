#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;

int cnt;
double sum;

void solve()
{
	char a[50], b[50];
	double temp = 0.0;
	scanf("%s", a);
	sscanf(a, "%lf", &temp);
	sprintf(b, "%.2lf", temp);
	bool ok = false;
	for (int j = 0; j < strlen(a); j ++ )
		if (a[j] != b[j]) ok = true;
	if (ok || temp < -1000 || temp > 1000)
	{
		printf("ERROR: %s is not a legal number\n", a);
		return;
	}
	else
	{
		sum += temp;
		cnt += 1;
	}
}

int main()
{
	int t; scanf("%d", &t);

	while (t -- )
	{
		solve();
	}
	if(cnt == 1)
        printf("The average of 1 number is %.2f", sum);
    else if(cnt > 1)
        printf("The average of %d numbers is %.2f", cnt, sum / cnt);
    else
        printf("The average of 0 numbers is Undefined");

	return 0;
}