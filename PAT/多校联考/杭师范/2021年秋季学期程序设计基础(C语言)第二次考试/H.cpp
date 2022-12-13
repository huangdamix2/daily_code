#include <iostream>
#include <queue>

using namespace std;

const int N = 15;
int n, m;
struct unitH
{
	int health, attack, defence;
	queue<int> facility_nor;
	int revive = 0, health2 = 0;
	int double_attack = 0;
	int advanced_attack = 0;

	bool st = true; // true live false die

} ally[N], enemy[N], *node;


/**
 * advanced facility 
 * 1.反甲
 * 2.日炎
 * 3.复活甲
 * 4.狂徒铠甲
 * 5.基克
 * 6.杀人剑
 *
 * normal facility
 * 1.锁子甲
 * 2.反甲
 * 3.复活甲
 */


void facility_upgrade(unitH &Ally)
{
	int fac1 = Ally.facility_nor.front();
	Ally.facility_nor.pop(); 
	int fac2 = Ally.facility_nor.front();
	Ally.facility_nor.pop(); 
	if (fac1 == 1)
	{
		if (fac2 == 1) Ally.defence += 180;
		else if (fac2 == 2) Ally.defence += 40, Ally.health += 200;
		else Ally.revive += 1;
	}
	else if (fac1 == 2)
	{
		if (fac2 == 1) Ally.defence += 40, Ally.health += 200;
		else if (fac2 == 2) Ally.health += 800;
		else Ally.attack += 10, Ally.double_attack += 1;
	}
	else
	{
		if (fac2 == 1) Ally.revive += 1;
		else if (fac2 == 2) Ally.attack += 10, Ally.double_attack += 1;
		else Ally.attack += 30, Ally.advanced_attack += 1;
	}
}

void init()
{
	int faN; scanf("%d%d%d", &n, &m, &faN);
	for (int i = 1; i <= n; i ++ )
		cin >> ally[i].health >> ally[i].attack >> ally[i].defence;
	for (int i = 1; i <= m; i ++ )
		cin >> enemy[i].health >> enemy[i].attack >> enemy[i].defence;

	if (faN)
	{
		int armor, sword, tonic; cin >> armor >> sword >> tonic;
		while (faN -- )
		{
			int Q, P; cin >> Q >> P;
			ally[P].facility_nor.push(Q);
			if (Q == 1) ally[P].defence += 10;
			else if (Q == 2) ally[P].health += 100;
			else ally[P].attack += 10;
			if (ally[P].facility_nor.size() == 2)
			{
				facility_upgrade(ally[P]);
			}
		}
	}
}


void battle()
{

	while (1)
	{
		if (!ally[n].st && !enemy[m].st)
		{
			printf("henfan\n");
			return;
		}
		if (!ally[n].st)
		{
			printf("G\n");
			return;
		}

		if (!enemy[n].st) 
		{
			printf("zhuangshenmedongxi\n");
			return;
		}

		for (int i = 1; i <= n; i ++ ) if (ally[i].revive) ally[i].health2 = ally[i].health;

		int dam_A = 0, dam_E = 0;
		for (int i = 1; i <= n; i ++ )
		{
			if (ally[i].st)
			{
				if (ally[i].double_attack) dam_A += ally[i].attack * ally[i].double_attack;
				else dam_A += ally[i].attack;
			}
		}

		for (int i = 1; i <= n; i ++ )
			if (enemy[i].st) dam_E += enemy[i].attack;


		int attack_update = 0;
		for (int i = 1; i <= m; i ++ )
			if (enemy[i].st)
			{
				if (dam_A < enemy[i].health) enemy[i].health -= dam_A;
				else enemy[i].st = false, attack_update ++ ;
			}


		for (int i = 1; i <= n; i ++ )
		{
			if (ally[i].st)
			{
				if (dam_E < ally[i].health) ally[i].health -= dam_E;
				else 
				{
					if (ally[i].revive)
					{
						ally[i].revive -- ;
						ally[i].health = ally[i].health2;
					}
					else ally[i].st = false;
				}

				if (attack_update)
					if (ally[i].advanced_attack) 
						ally[i].attack += 10*ally[i].advanced_attack;
			}
		}


	}

}


void solve()
{
	init();
	battle();
}

int main()
{
	solve();
	return 0;	
}