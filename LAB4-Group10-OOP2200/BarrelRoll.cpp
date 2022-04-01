#include "BarrelRoll.h"
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>	// time 
using namespace std;

int RandomRoll(int num)
{
	int min = 0;
	int max = 50;
	bool youShallNotPass = false;
	//int* rollOrder = nullptr;
	int* rollRandom = nullptr;
	//rollOrder = new int[num];
	rollRandom = new int[num];
	

	while (youShallNotPass == false)
	{
		
		if (min >= num && num <= max)
		{
			for (int i = 0; i <= num - 1; i++)
			{
				//rollOrder[i] = i;
				rollRandom[i] = rand() % num + 1;

			}
			for (int i = 0; i <= num - 1; i++)
			{
				string generatedRoll = "|" + to_string(rollRandom[i]);

				for (int x = 0; x <= num - 1; x++)
				{
					if (rollRandom[i] == rollRandom[x])
					{
						string match = "|" + to_string(rollRandom[i]);
					}
				}
			}


		}
	}

	delete[] rollRandom;
}


void display(string one, string two)
{

}