#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

const int N = 1010;

int main()
{
	string setence;
	string reSetence[N];

	// vector<string> reSetence;

	getline(cin, setence);

	setence += ' ';

	int reIndex = 0;	
	for (unsigned int i = 0, j = 0; i < setence.size(); i ++  )
	{
		if (setence[i] == ' ')
		{
			while (j < i)
			{
				reSetence[reIndex] += setence[j ++ ];
			}
			reIndex ++ ;
			j ++ ;
		}
	}

	for (int i = reIndex - 1; i >= 0; i -- ) 
	{
		cout << reSetence[i];
		if (i != 0) printf(" ");
	}
	

	// printf("%d ", setence.size());
	return 0;

}
