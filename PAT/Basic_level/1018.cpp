#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
	char jGesture, yGesture;
	int pj = 0, jWin = 0, yWin = 0;
	int aj = 0, ac = 0, ab = 0, bj = 0, bc = 0, bb = 0;
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i ++ )
	{
		cin >> jGesture >> yGesture;
		if (jGesture == yGesture) pj ++ ;
		else if ( (jGesture == 'C' && yGesture == 'J') || (jGesture == 'J' && yGesture == 'B') || (jGesture == 'B' && yGesture == 'C') ) 
		{
			jWin ++ ;
			if (jGesture == 'J') aj ++ ;
			else if (jGesture == 'B') ab ++ ;
			else if (jGesture == 'C') ac ++ ;

		}
		else if ( (yGesture == 'C' && jGesture == 'J') || (yGesture == 'J' && jGesture == 'B') || (yGesture == 'B' && jGesture == 'C') ) 
		{
			yWin ++ ;
			if (yGesture == 'J') bj ++ ;
			else if (yGesture == 'B') bb ++ ;
			else if (yGesture == 'C') bc ++ ;

		}
	}


	cout << jWin << " " << pj << " " << (n - jWin - pj) << endl;
	cout << yWin << " " << pj << " " << (n - yWin - pj) << endl;
	printf("%c %c\n", (ac > ab && ac >= aj) ? 'C' : (ab >= aj ? 'B' : 'J'), (bc > bb && bc >= bj) ? 'C' : (bb >= bj ? 'B' : 'J'));

	return 0;
}