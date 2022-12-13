#include <iostream>
#include <cstdio>


using namespace std;
const int N = 100005;


int main()
{
		
	int n; scanf("%d", &n);
	int cnt[N] = {};
	int index, score, maxScore = 0, maxIndex = 0;
	for (int i = 0; i < n; i ++ )
	{
		scanf("%d %d", &index, &score);
		cnt[index] += score;
	}

	for (int i = 1; i <= n; i ++ )
		if (cnt[i] >= maxScore) maxScore = cnt[i], maxIndex = i;

	printf("%d %d", maxIndex, maxScore);
	return 0;
}