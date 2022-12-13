#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;

const int N = 100010;

void top_bottom(int n)
{
	for (int i = 0; i < n; i ++ ) printf("*");
	puts("");

}

void border_top_bottom(int n)
{
	for (int i = 1; i <= n; i ++ )
	{
		if (i == 1 || i == n) printf("*");
		else printf(".");
	}
	puts("");

}

void font_border(int n)
{
	// int border = n + 1;
	for (int i = 0; i < n; i ++ ) printf(".");

}

void zjut_top(int border, int font_weight)
{

	font_border(border);
	// z
	for (int i = 1; i <= font_weight; i ++ ) printf("#");

	font_border(border);
	// j
	for (int i = 1; i <= font_weight; i ++ ) printf("#");

	font_border(border);
	// u 
	for (int i = 1; i <= font_weight; i ++ )
	{
		if (i == 1 || i == font_weight) printf("#");
		else printf(".");
	}

	font_border(border);
	// t
	for (int i = 1; i <= font_weight; i ++ ) printf("#");

	font_border(border);
	
}

void zjut_body(int border, int font_weight, int level)
{
	font_border(border);
	// z
	int p = font_weight - level + 1;
	for (int i = 1; i <= font_weight; i ++ )
	{
		if (i == p) printf("#");
		else printf(".");
	}

	font_border(border);
	// j
	int mid = (font_weight + 1) >> 1;
	for (int i = 1; i <= font_weight; i ++ )
		if (i == mid) printf("#");
		else printf(".");


	font_border(border);
	// u
	for (int i = 1; i <= font_weight; i ++ )
	{
		if (i == 1 || i == font_weight) printf("#");
		else printf(".");
	}

	font_border(border);
	// t
	for (int i = 1; i <= font_weight; i ++ )
		if (i == mid) printf("#");
		else printf(".");

	font_border(border);

}

void zjut_bottom(int border, int font_weight)
{
	int mid = (font_weight + 1) >> 1;

	font_border(border);
	// z
	for (int i = 1; i <= font_weight; i ++ ) printf("#");

	font_border(border);
	// j
	for (int i = 1; i <= font_weight; i ++ )
	{
		if (i <= mid) printf("#");
		else printf(".");
	}

	font_border(border);
	// u
	for (int i = 1; i <= font_weight; i ++ ) printf("#");

	font_border(border);
	// t
	for (int i = 1; i <= font_weight; i ++ )
		if (i == mid) printf("#");
		else printf(".");

	font_border(border);

}

void level(int n, int top, int bottom, int font_border, int font_weight)
{
	if (n == top) 
	{
		zjut_top(font_border, font_weight);
	}
	else if (n == bottom)
	{
		zjut_bottom(font_border, font_weight);
	}
	else zjut_body(font_border, font_weight, n);


}

void solve()
{
	int n; scanf("%d", &n);
	int weight = 13*n + 19;

	top_bottom(weight);
	for (int i = 0; i < n; i ++ ) border_top_bottom(weight);

	int font_weight = 2*n + 3, font_height = 2*n + 3, font_border = n + 1;
	
	for (int i = 1; i <= font_height; i ++ )
	{
		printf("*");
		level(i, 1, font_height, font_border, font_weight);
		printf("*");
		puts("");
	}
	
	for (int i = 0; i < n; i ++ ) border_top_bottom(weight);
	top_bottom(weight);

}

int main()
{
	// int t; scanf("%d", &t);

	// while (t -- )
	// {
		solve();
	// }

	return 0;

}
