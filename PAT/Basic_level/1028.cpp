#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
	int N; scanf("%d", &N);
	// string date;
	// string name[10005];
	// int year[10005], month[10005], day[10005];
	string name, birth;
	string maxname, minname, maxbirth= "1814/09/06", minbirth = "2014/09/06";
	int cnt = 0;
	for (int i = 0; i < N; i ++ )
	{
		cin >> name >> birth;
		if (birth >= "1814/09/06" && birth <= "2014/09/06")
		{
			cnt ++ ;
			if (birth >= maxbirth)
			{
				maxbirth = birth;
				maxname = name;
			}
			if (birth <= minbirth)
			{
				minbirth = birth;
				minname = name;
			}
		}
	}
	cout << cnt;
	if (cnt != 0) cout << " " << minname << " " << maxname;
	return 0;
}