#include <iostream>
#include <cstdio>

const int N = 100010;
using namespace std;
typedef long long LL;


// 17knut = 1sickle
// 29sickle = 1galleon


int calcu(LL &P, LL &A, LL t, LL k, int flag)
{
	A -= t, t = 0; // 前一位借位
	if (flag)
	{
		// printf("%d\n", A);
		(A < P) ? A += k, t ++ , A -= P : A -= P;
		// if (A < P)A += k，t ++ ;	// 进位, 后一位借位+1
		// A -= P;
	}
	else
	{
		A = abs(A), P = abs(P);
		A -= P;
	}
	
	return t;
}

int main()
{
	LL pGalleon, pSickle, pKnut, aGalleon, aSickle, aKnut;
	scanf("%lld.%lld.%lld", &pGalleon, &pSickle, &pKnut);
	scanf("%lld.%lld.%lld", &aGalleon, &aSickle, &aKnut);

	string P, A;
	P = to_string(pGalleon) + '.' + to_string(pSickle) + '.' + to_string(pKnut);
	A = to_string(aGalleon) + '.' + to_string(aSickle) + '.' + to_string(aKnut);
	// cout << P << " " << A;
	if (A < P) 
	{
		cout << '-';
		swap(pGalleon, aGalleon), swap(pSickle, aSickle), swap(pKnut, aKnut);
	}

	int t;
	t = calcu(pKnut, aKnut, 0, 29, 1);
	t = calcu(pSickle, aSickle, t, 17, 1);
	t = calcu(pGalleon, aGalleon, t, 0, 0);
	
	printf("%lld.%lld.%lld", aGalleon, aSickle, aKnut);

	return 0;
}