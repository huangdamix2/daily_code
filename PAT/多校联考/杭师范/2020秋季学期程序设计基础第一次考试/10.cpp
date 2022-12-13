#include <iostream>
#include <cstdio>

using namespace std;

struct warrior
{
	int S, H, E, A;
	bool weak = false;
};


void weakness(struct warrior &obj)
{
	obj.H -= obj.A;
	obj.weak = true;
}

void action(struct warrior &obj1, struct warrior &obj2, int actionNum)
{
	// printf("action!\n");
	switch (actionNum)
	{
		case 0:
			if (obj1.E <= 3) obj1.E += 2;
			else obj1.E = 5;
			break;

		case 1:
			if (obj1.E >= 1)
				obj1.S += 5, obj1.E -= 1;
			else weakness(obj1);
			break;

		case 2:
			if (obj1.E >= 1) 
				obj1.A *= 1.3, obj1.E -= 1;
			else weakness(obj1);
			break;

		case 3:
			if (obj1.weak)
			{
				if (obj1.E >= 1) 
					obj2.H -= (0.5 * obj1.A), obj1.E -= 1;
				else weakness(obj1);
			}
			else
			{
				if (obj1.E >= 1) 
					obj2.H -= obj1.A, obj1.E -= 1;
				else weakness(obj1);
			}
			break;


		case 4:
			if (obj1.E >= 2) 
			{
				obj1.A *= 1.1;
				obj2.H -= obj1.A, obj1.E -= 1;
				obj1.A *= 1.1;
			}
			else weakness(obj1);
			break;

		case 5:
			if (obj1.E >= 3) 
			{
				if (obj2.E >= 1) obj2.E -= 1, obj1.E += 1;
				obj2.H -= obj1.A, obj1.E -= 1;
			}
			else weakness(obj1);
			break;

		case 6:
			if (obj1.E > 0)
				while (obj1.E -- ) obj2.H -= obj1.A;
			// obj1.E = 0;
			break;

		default:
			return;
	}
	obj1.weak = false;
}

void round(struct warrior &HJ, struct warrior &MR)
{
	int HJaction, MRaction;
	cin >> HJaction >> MRaction;
	if (HJ.S >= MR.S) 
	{
		// HJ first
		action(HJ, MR, HJaction);
		if (MR.H <= 0) return;
		action(MR, HJ, MRaction);
	}
	else
	{
		// MR first
		action(MR, HJ, MRaction);
		if (HJ.H <= 0) return;
		action(HJ, MR, HJaction);
	}

}


int main()
{

	struct warrior HJ, MR;

	cin >> HJ.S >> HJ.H >> HJ.E >> HJ.A;
	cin >> MR.S >> MR.H >> MR.E >> MR.A;

	// cout << HJ.H << MR.H;
	int k, cnt = 0; cin >> k;
	while (k -- && HJ.H > 0 && MR.H > 0)
		cnt ++ , round(HJ, MR);

	if (HJ.H <= 0)
		printf("In the %d round,Rose became Hj's father.\n", cnt);
	else if (MR.H <= 0)
		printf("In the %d round,Hj became Rose's father.\n", cnt);	
	else 
		printf("No one fails.\n" );

	// cout << HJ.E << " " << MR.H << " " <<  cnt;


	return 0;
}