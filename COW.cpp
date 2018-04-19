#include "COW.h"
#include<math.h>
#include<vector>
#include<fstream>
using namespace std;


COW::COW() { 
	top5mass = 0;
}
COW::COW(int *mass, int num)
{
	int b = 0;
	int c = 0;
	int va = 1;
	for (int a = 2; a <= num; a++)
	{

		while (a - va >= 1)
		{
			
			if (mass[a - va + 1] >= mass[a - va])
			{
				b = mass[a-va+1];
				c = mass[a - va];
				mass[a-va+1] = c;
				mass[a - va] = b;

			}
			if (a - va >= 1)
			{
				va++;
			}
			if (a - va < 1)
				{
					va = 0;
					break;
				}

		}
	}
		
		top5(mass);

	}

void COW::top5(int *mass) {
	top5mass = 0;
	for (int a = 1; a < 6; a++)
	{

		top5mass = top5mass + mass[a];
	}
	cout << top5mass;
}
		
